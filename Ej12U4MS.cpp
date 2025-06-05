#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	struct Estudiante{
		string nombre;
		int edad;
		int calificaciones[5];
		int promedio;
	};
	Estudiante estudiante1;
	int suma=0;
	cout<<"Ingrese el nombre del estudiante:";
	getline(cin, estudiante1.nombre);
	cout<<"Ingresa la edad del estudiante:";
	cin>>estudiante1.edad;
	cout<<"Ingresa las calificaciones de 5 materias:\n";
	for(int i=0;i<5;i++){
		cout<<"Calificaciones de la unidad"<<i+1<<":";
		cin>>estudiante1.calificaciones[i];
		suma=suma+estudiante1.calificaciones[i];
	}
	estudiante1.promedio=suma/5;
	cout<<"\nInformacion del estdiante:\n";
	cout<<"Nombre:"<<estudiante1.nombre<<"\n";
	cout<<"Edad:"<<estudiante1.edad<<"\n";
	cout<<"Calificaciones";
	for(int i=0;i=5;i++){
		cout<<estudiante1.calificaciones[i]<<" ";
	}
	cout<<"\nPromedio:"<<estudiante1.promedio;
	return 0;
}