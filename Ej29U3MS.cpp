//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
#include <time.h>>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int precio, x,ls,li;
	do{
		cout<<"Dame el limite inferior: ";
		cin>>li;
		cout<<"Dame el limite superior: ";
		cin>>ls;
	}while(li>=ls);
	do{
		cout<<"Dime el precio(entre "<<li<<" y "<<ls<<"): ";
		cin>>precio;
	}while (precio<li or precio>ls);
	do{
		cout<<"Atinale al precio: ";
		cin>>x;
		if (x>precio)
			cout<<"Muy arriba\n";
		else
			if (x<precio)
			cout<<"Muy abajo\n";
			else
				cout<<"Acertaste, el precio es: "<<precio;
	}while(x!=precio);
	return 0;
}
