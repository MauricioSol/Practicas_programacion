//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int n;
	cout<<"Dame un numero para determinar si es par o impar: ";
	cin>>n;
	if(n%2)
	cout<<"El numero es impar\n";
	else
	cout<<"El numero es par\n";
	system("pause");
	if(n%2==0)
		cout<<"El numero es par\n";
	else
	cout<<"El numero es impar\n";
	return 0;
}
