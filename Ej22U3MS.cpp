//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int cuantos,suma,x;
    float promedio;
    cuantos=0;
    suma=0;
    for (x=1;x!=-1;)
    {
    	cout<<"Dame un numero, -1 para terminar: ";
    	cin>>x;
    	cuantos++;
    	suma=suma+x;
	}
	suma++;
	cuantos=cuantos-1;
	promedio=suma/cuantos;
	cout<<" Fueron "<<cuantos<<" numeros\n";
	cout<<" La sumatoria es= "<<suma<<"\n";
	cout<<"El promedio es="<<promedio<<"\n";
	return 0;
}
