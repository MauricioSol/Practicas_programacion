//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int x,factorial;
	cout<<"Dime un numero para calcular factorial: ";
	cin>>factorial;
	cout<<factorial;
	for (x=factorial-1;x>=1;x--){
		cout<<"x"<<x;
		factorial=factorial*x;
	}
	cout<<"="<<factorial;
	return 0;
}
