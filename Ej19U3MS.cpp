//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	float numerador,denominador;
	cout<<"Dame el numerador (dividendo): ";
	cin>>numerador;
	cout<<"Dame el donominador (divisor): ";
	cin>>denominador;
	if(denominador)
	cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	cout<<"la division entre cero no esta permitida";
	system("pause");
	
	if(denominador!=0)
	cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	else
	cout<<"la division entre cero no esta permitida";
	system("pause");
	
	if(!denominador)
	cout<<"La division sobre cero no se permite";
	else
	cout<<numerador<<"/"<<denominador<<"="<<numerador/denominador<<"\n";
	return 0;
}
