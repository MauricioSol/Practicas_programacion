//Mauricio Solorzano Barboza 24041066
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Dame un numero para determinarlo si es positivo o negativo ";
    cin>>n;
    n>0?cout<<"El numero es positivo\n":cout<<"El numero es negativo\n";
	system("pause");
	if(n>0)
	cout<<"El numero es positivo\n";
	else
	if(n<0)
	cout<<"El numero es negativo\n";
	else
	cout<<"El numero es cero";
	return 0;
}
