//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int x,y;
	float z;
	for(x=1;x<11;x++)
	{
		cout<<x<<" , ";
	}
	cout<<"\n";
	system("PAUSE");
	
	for(x=100;x!=65;x-=5)
	{
		z=sqrt(x);
		cout<<" la raiz cuadrada de "<<x<<" es "<<z<<"\n";
	}
	system ("pause");
	x=10;
	for(y=1;y!=x;++y){
		cout<<y<<" Dentro del ciclo(nunca entra)\n";
	}
	cout<<y<<" Fuera del ciclo\n";
	system("PAUSE");
	for(x=0,y=0;x+y<10;++x)
	{
		cout<<" Dame el valor de y: ";
		cin>>y;
		cout<<x<<"+"<<x+y<<" El ciclo continua mientras la suma sea <10\n";
	}
	cout<<x<<"+"<<y<<"="<<x+y<<" Fuera del ciclo\n";
	system("pause");
	for(x=0;x!=123;)
	{
		cout<<"Dame el valor de x, 123 prara terminar el ciclo: ";
		cin>>x;
	}
	system("pause");
	x=1;
	for(;x<=10;)
	{
		printf("%d\n",x);
		++x;
	}
	system("pause");
	for(;;)
		printf("Nunca termina\n");
	
	system("pause");
	cout<<"Hola mundo\n";
	for (x=0;x<199990000;x++)
		cout<<"Hola mundo despues de unos cuantos segundos";
	return 0;
}
