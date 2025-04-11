//Mauricio Solorzano Barboza 24041066
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int X, int Y) {
		COORD coord;
		coord.X = X;
		coord.Y = Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
using namespace std;
}
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int uno,dos,tres,mayor;
	char nombre[20];
	gotoxy(25,2);
	cout<<"INSTITUTO TECNOLOGICO DE DURANGO";
	gotoxy(28,3);
	cout<<"Fundamneto de programacion";
	gotoxy(10,5);
	cout<<"Dime tu nomre ";
	gets(nombre);
	gotoxy(10,6);cout<<"Dime el primer numero: "; cin>>uno;
	gotoxy(10,7);cout<<"Dime el segundo numero: "; cin>>dos;
	gotoxy(10,8);cout<<"Dime el tercer numero: "; cin>>tres;
	if (uno>dos && uno>tres)
	{
		mayor=uno;
	}
	else
	{ 
		if (dos>uno && dos>tres)
		{
			mayor=dos;
		}
		else
		{
			mayor=tres;
		}
	}
	gotoxy(10,10);
	cout<<nombre<<" El mayor de los tres numeros es: "<<mayor;
	return 0;
}
