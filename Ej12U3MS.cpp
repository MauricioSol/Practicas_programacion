//Mauricio Solorzano Barboza 24041066
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int d,m,a;
	string mes;
	cout<<"Dame una fecha en este formato: ddmmaaaa ";
	 scanf("%2d%2d%4d",&d,&m,&a);
    if (m==1)
        mes="Enero";
    if (m==2)
        mes="Febrero";
    if (m==3)
        mes="Marzo";
    if (m==4)
        mes="Abril";
    if (m==5)
        mes="Mayo";
    if (m==6)
        mes="Junio";
    if (m==7)
        mes="Julio";
    if (m==8)
        mes="Agosto";
    if (m==9)
        mes="Septiembre";
    if (m==10)
        mes="Octubre";
    if (m==11)
        mes="Noviembre";
    if (m==12)
        mes="Diciembre";
    cout<<"La fecha es: "<<d<<" de "<<mes<<" de "<<a;
    return 0;
}
