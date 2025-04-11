//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int precio, x;
	srand(time(0));
	precio=rand()%1001;
	do{
		cout<<"Dime el precio (entre o y 1000): ";
		cin>>x;
		if(x>precio)
			cout<<"Muy arriba\n";
		else
			if(x<precio)
			cout<<"Muy abajo\n";
			else
				cout<<"Acertaste, el precio es: "<<precio;		
	}while(x!=precio);
	return 0;
}
