//Mauricio Solorzano Barboza 24041066
#include <stdio.h>
#include <conio.h>
int main()
{
	char cad[80];
	char c;
	puts("Dame una cadena");
	gets(cad);
	puts("Ejemplo de impresion con puts");
	puts(cad);
	printf("ejemplo de impresion con printf: ");
	printf(cad);
	printf("\npresiona una tecla y continua automaticamente: ");
	c=getche();
	puts("\n");
	putchar(c);
	puts("\n");
	printf("presione una tecla y luego enter ");
	c=getchar();
	putchar(c);
	printf("\npresiona una tecla y continua automaticamente: ");
	fflush(stdin);
	c=getch();
	putchar(c);
	return 0;
}
