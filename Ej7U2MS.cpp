//Mauricio Solorzano Barboza 24041066
#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char c;
	char letras[20]="Hexadecimal";
	int i;
	float f;
	i=10;
	f=123.45;
	c='x';
	printf("Impresion simple\n");
	printf("La variable char tiene un valor de %c\n varint=%d\n varfloat=%f\n cadena=%s",c,i,f,letras);
	system("pause");
	printf("Impresion sin espacios \n");
	printf("%d%f%c%s",i,f,c,letras);
	printf("impresion con etiquetas\n");
	printf("entero: %d Flotante: %f Caracter: %c Cadena: %s\n",i,f,c,letras);
	system("pause");
	printf("Dame un entero: ");
	fflush(stdin);
	scanf("%d",&i);
	puts("Dame un flotante: ");
	fflush(stdin);
	scanf("%f",&f);
	cout<<"Dame un caracter: ";
	fflush(stdin);
	c=getchar ();
	printf("Dame una cadena: ");
	fflush(stdin);
	scanf("%[^\n]",letras);
	printf("entero: %d, flotante: %f, caracter: %c, cadena: %s\n",i,f,c,letras);
	i=1234;
	f=345.678;
	printf("probando diferentes anchos en enteros: 3, 5 y 8 espacios\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%3d %5d %8d\n",1,10,20);
	printf("%3d %5d %8d\n",i,i,i);
	printf("%d %d %d\n",1,10,20);
	system("pause");
	printf("probando anchos flotantes: 3, 10 y 13 espacios\n");
	printf("%3f %10f %13f\n",f,f,f);
	printf("probando anchos en exp: 3, 13 y 16 espacios\n");
	printf("%3e %13e %16e\n",f,f,f);
	system("pause");
	f=123.456;
	printf("probando diferentes cantidades de cifras 7.0 7.3 y 7.1\n");
	printf("%7.0f %7.3f %7.1f\n",f,f,f);
	system("pause");
	printf("probando difernetes prcisiones en cadenas: 10, 15, 15.5 y .5\n");
	printf("%10s %15s %15.5s %.5s",letras,letras,letras,letras);
	system("pause");
	printf("impresion con signo: %+d\n",i);
	printf("impresion con espacios al principio y al final del dato y con ceros\n");
	printf("%3d %5d %8d\n",i,i,i);
	printf("%-3d %-5d %-8d\n",i,i,i);
	printf("%03d %05d %08d\n",i,i,i);
	system("pause");
	printf("%d en octal es %#o y en hexadecimal es %#x",i,i,i);
	
	return 0;
	}
