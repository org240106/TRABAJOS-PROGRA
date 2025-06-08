#include<iostream>
#include<time.h>
using namespace std;
int cuantos(void);
int captura(int(&arreglo)[100],int n);
int ordena(int(&arreglo)[100],int n);
int imprime(int(&arreglo)[100],int n);
int main()
{
	int num, arreglo[100];
	srand(time(0));
	num=cuantos();
	cout<<"El arreglo sera de "<<num<<" elementos\n";
	cout<<"El arreglo original es: \n";
	imprime(arreglo,num);
	cout<<"El arreglo ordenado es: \n";
	ordena(arreglo,num);
	return 0;
}
int cuantos(void)
{
	int n=0;
	do{
		cout<<"Dime cuantos elementos quieres ordenar? <2-10>";
		cin>>n;
	}while(n>10 or n<2);
	return n;
}
int captura(int(&arreglo)[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	arreglo[i]=rand()%10;
	return 0;
}
int imprime(int(&arreglo)[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout<<"Arreglo["<<i<<"]="<<arreglo[i]<<"\n";
}
int ordena(int (&arreglo)[100], int n)
{
	int i,j,tempo;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arreglo[i]>arreglo[j])
			{
				tempo=arreglo[j];
				arreglo[j]=arreglo[i];
				arreglo[i]=tempo;
			}
		}
	}
	return 0;
}