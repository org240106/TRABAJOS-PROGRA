#include<iostream>
#include<time.h>//random
using namespace std;
int cuantos(void);
int captura(int (&arreglo) [100], int n);
int ordena(int (&arreglo) [100], int n) ;
int imprime(int (&arreglo) [100], int n) ;
int main(){
int num, arreglo[ 100];
srand (time (0)); num=cuantos ( );
cout<<"El arreglo sera de "<<num<<" elementos\n";
captura (arreglo, num) ;
cout<<"El arreglo original es: \n";
imprime (arreglo, num) ;
cout<<"El arreglo ordenado es: \n";
ordena (arreglo, num) ; imprime (arreglo, num) ;
return 0;
}
int cuantos (void)
{
int n=0;
do{
cin>>n;
}while (n>10 or n<2);
return n;
}
int captura(int (&arreglo) [100], int n)
{

int i;
for (i=0;i<n;i++)//Ciclo para Llenar el vector
arreglo[i]=rand()%10; // Genera numero aleatorio entre 0 y 9
return 0;
}
int imprime(int (&arreglo) [100], int n)
{
int i;
for (i=0;i<n;i++)
cout<<"Arreglo["<<i<<"]="<<arreglo[i]<<"\n" ;
return 0;
}
int ordena(int (&arreglo) [100],int n)
{
int i,j, tempo;
for (i=0;i<n;i++)
{
for (j=i+1;j<n;j++)
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