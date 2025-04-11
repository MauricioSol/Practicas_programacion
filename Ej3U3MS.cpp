//Mauricio Solorzano Barboza 24041066
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int cal;
	cout<<"Dime una calificacion ";
	cin>>cal;
	if (cal>=70)
		cout<<"Aprobatoria\n";
	system("pause");
	system("cls");
	cout<<("Dime otra calificacion: ");
	cin>>cal;
	if (cal>=70)
		cout<<"suficiente\n";
	else 
		cout<<"No suficiente\n";
	system("pause");
	system("cls");
	cout<<"Dime una calificacion: (Evaluando con ?) ";
	cin>>cal;
	cal>=70?cout<<"suficiente\n":cout<<"No suficiente\n";
	cout<<"Dime una calificacion: ";
	cin>>cal;
	if (cal>=70)
	{
		printf("La calificacion obtenida es: ");
		cout<<"Suficiente\n";
	}
	else 
	{
		printf("La calificacion obtenida es: ");
		cout<<"No suficiente\n";
	}
	return 0;
	}
	
