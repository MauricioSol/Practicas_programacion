//Mauricio Solorzano Barboza 24041066
#include <windows.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int x, tabla;
	cout<<"Dimme cual tabla quieres generar: ";
	cin>>tabla;
	for(x=1;x<11;x++){
		cout<<tabla<<" x "<<x<<" = "<<tabla*x<<"\n";
	}
	for(x=1;x<11;x++)
		printf("%2d X %d = %3d\n",tabla,x,tabla*x);
	return 0;
}
