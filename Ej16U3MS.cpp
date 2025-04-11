//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int d,m,a;
	cout<<"Dame una fecha en este formato:ddmmaaaa";
	scanf("%2d%2d%4d", &d,&m,&a);
	switch(m)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			printf("primer cuatrimestre");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			printf("segundo cuatrimestre");
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			printf("tercer cuatrimestre");
			break;
			printf("Mes no valido");
	}
		return 0;
}
