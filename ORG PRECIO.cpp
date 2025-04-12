#include<windows.h>
#include<iostream>
#include<time.h>//random
using namespace std;
int main ( )
//OSCAR ROJERO GARAY 24041054
{

SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);
int precio, x;
srand(time(0)); // Inicializar La semilla de números aleatorios
precio=rand ()%1001; // Genera numero aleatorio entre 0 y 100
do{

cout<< "Dime el precio (entre 0 y 1000): ";
cin>>x;
if(x>precio)
cout<< "Muy arriba\n";
else
if(x<precio)
cout<< "Muy abajo\n";
else
cout<< "Acertaste, el precio es: "<<precio;
}while(x!=precio);
return 0;
}