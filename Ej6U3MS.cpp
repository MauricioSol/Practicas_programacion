//Mauricio Solorzano Barboza 24041066
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int X, int Y) {
		COORD coord;
		coord.X = X;
		coord.Y = Y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
using namespace std;
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	gotoxy(10,8);
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)
	{
		gotoxy(10,11);
		cout<<"**Correcto**";
	}
	else
	{
		gotoxy(36,9);
		cout<<"**Incorrecto**";
	}
	return 0;
}
