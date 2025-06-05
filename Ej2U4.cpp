#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	char cadena[15];
	int len,i;
	cout<<"Dame una palabra en miusculas:";
	gets(cadena);
	len=strlen(cadena);
	for(i=0;i<len;i++)
	cadena[i]=toupper(cadena[i]);
	cout<<"Impresion de la cadena completa:"<<cadena<<"\n";
	cout<<"Impresion elemento por elemento:\n";
	for (int i=0;i<len;i++)
	cout<<"Cadena["<<i<<"]="<<cadena[i]<<"\n";
	return 0;
	}
