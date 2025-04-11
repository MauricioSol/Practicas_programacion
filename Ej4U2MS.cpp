//Mauricio Solorzano Barboza 24041066
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	char cad[80];
	string cad2;
	char c;
	puts("dame una cadena (en realidad es un arreglo)");
	gets(cad);
	puts("ejemplo de impresion con puts");
	puts(cad);
	printf("ejemplo de impresion con puts");
	printf(cad);
	printf("\npresiona una tecla y continua automaticamnete: ");
	getch();
	puts("\n");
	printf("presione una tecla y luego enter: ");
	getchar();
	printf("presione una tecla y luego enter: ");
	fflush(stdin);
	getch();
	putchar(c);
	std::cout<<"Dame una cadena ahora con cin: ";
	std::cin>> cad;
	cout<<"\n La segunda celda no tiene espacios: "<<cad;
	cout<< "\nDame una cadena con espacios: ";
	fflush(stdin);
	getline(cin, cad2);
	cout<<"la cadena es " <<cad2 <<" ya con espacios" << "\n";
	cout<<"captura de un arreglo char con getline\n";
}
