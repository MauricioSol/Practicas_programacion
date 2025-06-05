#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int matriz[5][5];
	int i,j;
	srand(time(0));
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cout<<"Dame el valor del renglon"<<i<<" columna "<<j<<":";
			cin>>matriz[i][j];
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%3d",matriz[i][j]);
		cout<<"\n";
	}
	return 0;
}
