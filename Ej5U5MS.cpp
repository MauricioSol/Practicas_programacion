#include <iostream>
#include <stdio.h>
using namespace std;
int factorial(int n);
int main()
{
	int num;
	cout<<"Dame un numero para calcular su factorial:";
	cin>>num;
	cout<<"El factorial de "<<num<<" es:";
	num=factorial(num);
	cout<<num;
	return 0;
}
int factorial(int n)
{
	if (n==0)
	return 1;
	else 
	return n*factorial(n-1);
}