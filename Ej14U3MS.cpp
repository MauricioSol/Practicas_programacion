//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	char c;
	int opcion;
	cout<<"Dame un valor binario 0/1: ";
	cin>>c;
	switch(c)
	{
		case '0':
		cout<<"falso o apagado\n";
		break;
		case '1':
		cout<<"Cierto o encedido\n";
		break;
		default:
			cout<<"Tecleaste un valor incorrecto\n";
	}
	system("pause");
	system("cls");
	printf("1.-Quimica\n");
	cout<<"2.-Fisica\n";
	printf("3.-Matematicas\n");
	printf("4.-Recreo\n");
	printf("Seleccione una opcion: ");
	cin>>opcion;
	switch(opcion)
	{
		case 1:printf("Seleccionaste quimica\n");
		break;
		case 2:printf("Seleccionaste fisica\n");
		break;
		case 3:printf("Seleccionaste matematicas\n");
		break;
		case 4:printf("seleccionaste recreo\n");
		break;
		default:
			printf("Seleccionaste una opcion no valida\n");
	}
	return 0;
}
