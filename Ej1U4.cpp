#include <stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int vector[10];
	int i;
	for(i=0;i<10;i++)
	vector[i]=i*2;
	for(i=0;i<=10;i++)
	cout<<"Vector["<<i<<"]="<<vector[i]<<"\n";
	vector[0]=100;
	vector[2]=200;
	vector[3]=300;
	for(i=0;i<10;i++)
	cout<<vector[0]<<endl;
	cout<<vector[1]<<"\n";
	cout<<vector[9];
	for(i=0;i<10;i++)
	{
		cout<<"Dame el valor del vector["<<i<<"]:";
		cin>>vector[i];
    }
    for(i=0;i<15;i++)
    cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
	return 0;
}