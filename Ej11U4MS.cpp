#include <conio.h>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y){
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
	int r,vec[10];
	srand(time(0));
	printf("Maximice la pantalla y presione una tecla");
	getche();
	system("CLS");
	for(r=0;r<=78;r++){
		gotoxy(r,0);
		printf("*");
		gotoxy(r,18);
		printf("*");
	}
	for(r=0;r<18;r++){
		gotoxy(0,r);
		printf("*");
		gotoxy(79,r);
		printf("*");
	}
	gotoxy(30,2);
	cout<<"Impresion del vector";
	for(r=0;r<10;r++){
		vec[r]=rand()%100;
		gotoxy(40,r+3);
		printf("%d",vec[r]);
	}
	gotoxy(5,13);
	getche();
	return 0;
}