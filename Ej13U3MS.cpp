//Mauricio Solorzano Barboza 24041066
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int d,m,a;
	string mes;
	cout<<"Dime el dia: ";
	cin>>d;
	cout<<"Dime el mes: ";
	cin>>m;
	cout<<"Dime el año: ";
	cin>>a;
	if(m==1){
		mes="enero";
}
	else
	{
		if(m==2){
			mes="febrero"
		}
		else
		{
			if(m==3){
				mes="marzo";
			}
			else
			{
				if(m==4){
					mes="abril";
				}
				else
				{
					if(m==5){
						mes="mayo";
					}
					else
					{
						if(m==6){
							mes="junio";
						}
						else
						{
							if(m==7){
								mes=="julio";
							}
							else
							{
								if(m==8){
									mes=="agosto";
								}
								else
								{
									if(m==9){
										mes="septiembre";
									}
									else
									{
										if(m==10){
											mes="octubre";
										}
										else
										{
											if(m==11){
												mes="noviembre";
											}
											else
											{
												if(m==12){
													mes="Diciembre";
												}
												else
												{
													mes="No valido";
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
cout<<"la fecha es "<<d<<" de "<<mes<<" de "<<a;
return
}
