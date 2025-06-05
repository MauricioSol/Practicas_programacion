//Define una matriz cuadrada de 100*100 y despues elegir cuantos elementos por lado minimo 2 maximo 100
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
int main()
{
	SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int matriz[10][10],diags[2][10];
    int i,j,n;
    srand(time(0));
    do{
    	cout<<"Dime cuantos elemetos por lado tiene la matriz?<2-10>";
    	cin>>n;
	}while(n>10 or n<2);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	matriz[i][j]=rand()%100;
	cout<<"Impresion de la matriz \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%3d",matriz[i][j]);
		cout<<"\n";
	}
	cout<<"Impresion de la diagonal \n";
	for(i=0;i<n;i++)
	{
		diags[0][i]=matriz[i][i];
		printf("%3d",diags[0][i]);
	}
	cout<<"\nObtencion diagonal inversa\n";
	j=0;
		for(i=n-1;i>=0;i--)
		{
			diags[1][j]=matriz[j][i];
			printf("%3d",diags[1][j]);
			j++;
		}
	return 0; 
} 