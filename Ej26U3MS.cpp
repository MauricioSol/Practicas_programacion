//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int x,y=1;
	cout<<"lectura de 5 numeros enteros usando while\n";
	do{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
		continue;
		cout<<"por aqui paso solo cuando el numero es diferente a 0 \n";
		y++;
	}while(y<6);
	system("pause");
	system("CLS");
	cout<<"Lectura de 5 numeros enteros usando for estandar\n";
	for(y=1;y<6;y++)
	{
		cout<<"Dame un numero que no sea 0 (intento #"<<y<<")\n";
		cin>>x;
		if(x==0)
			continue;
		cout<<"por aqui paso solo cuando el numero es diferente a 0 \n";
	}
		return 0;
}
