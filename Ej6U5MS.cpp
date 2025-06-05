#include <iostream>
#include <stdio.h>
using namespace std;
void modificarArregloChar(char (&arregloChar)[5]);
void modificarArregloInt(int (&arregloInt)[5]);
int main()
{
	char arregloChar[]="Hola";
	int arregloInt []={1,2,3,4,5};
	cout<<"Arreglo char original:"<<arregloChar<<"\n";
	cout<<"Arreglo int original:";
	for(int i=0;i<5;i++)
	cout<<arregloInt[i]<<" ";
	cout<<"\n";
	modificarArregloChar(arregloChar);
	modificarArregloInt(arregloInt);
	cout<<"Arreglo char modificado:"<<arregloChar<<"\n";
	cout<<"Arreglo int modificado:";
	for(int i=0;i<5;i++)
	cout<<arregloInt[i]<<" ";
	cout<<"\n";
	return 0;
}
void modificadorArregloChar(char(&arregloChar)[5])
{
	for(int i=0;i<5;i++)
	arregloChar[i]='x';
}
void modificarArregloInt(int (&arregloInt)[5])
{
	for(int i=0;i<5;i++)
	arregloInt[i]*=2;
}