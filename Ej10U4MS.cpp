#include <windows.h>
#include <string>
#include <iostream>
using namespace std;
struct Persona{
	string nombre;
	int edad;
	float altura;
};
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	Persona persona1;
	cout<<"Ingrese el nombre:";
	getline(cin,persona1.nombre);
	cout<<"Ingrese la edad:";
	cin>>persona1.edad;
	cout<<"Ingrese la altura(en metros):";
	cin>>persona1.altura;
	cout<<"\nDatos de la persona:\n";
	cout<<"Nombre:"<<persona1.nombre<<"\n";
	cout<<"Edad:"<<persona1.edad<<" años"<<endl;
	cout<<"Altura:"<<persona1.altura<<"m"<<endl;
	return 0;
}