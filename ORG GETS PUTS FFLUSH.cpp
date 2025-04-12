#include <stdio.h>//gets, puts, fflush
//#include<stdlib.h> //system
//#include <iostream> //cin, cout
#include <conio.h> //getch
//using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	char cad[80];//decara un arreglo 80 posiciones char llamado cad
	char c; //declara una variable de tipo char (solo para n caracter)
	puts("dame una cadena");//imprime en pantalla la cadena argumento 
	gets(cad); //lee por teclado la variable argumento
	puts("Ejemplo de impresion con puts");
	puts(cad); //imprime en pantalla la variable argumento
	return 0;
}