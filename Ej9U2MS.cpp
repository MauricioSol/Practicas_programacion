//Mauricio Solorzano Barboza 24041066
#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int numh,numm, total;
	float pcth,pctm;
	cout<<"Dime la cantidad de hombres asitentes: ";
	cin>>numh;
	cout<<"Dime la cantidad de mujeres asistentes: ";
	cin>>numm;
	total=numh+numm;
	cout<<"El total de asistentes es: "<<total<<"\n";
	pcth=numh*100/total;
	pctm=numm*100/total;
	cout<<"hombres: "<<pcth<<"%"<<" mujeres: "<<pctm<<"%";
	return 0;
}
