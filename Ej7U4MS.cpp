#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
int main( )
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int vector[10];
    int i, j, n, tempo;
    srand(time(0));
    do{
        cout<<"Dime cuantos elementos quieres ordenar? <2-10>:\n";
        cin>>n;
    }while(n<2 || n>10);
    
    for(i=0;i<n;i++)
    {
        vector[i]=rand()%10; 
        cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(vector[i]>vector[j])
            {
                tempo=vector[j];
                vector[j]=vector[i];
                vector[i]=tempo;
            }
        }
    }

    cout<<"Vector ordenado\n";
    for(i=0;i<n;i++)
        cout<<"vector["<<i<<"]="<<vector[i]<<"\n";
    return 0;
}