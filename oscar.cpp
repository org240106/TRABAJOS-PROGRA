#include <stdio.h>//gets, puts, fflush
//#include<stdlib.h> //system
#include <iostream> //cin, cout
#include <conio.h> //getch
using namespace std;
main( )
//OSCAR ROJERO GARAY 24041054
{
	char cad[80];//declara un arreglo 80 posiciones char llamado cad
	string cad2;
	char c; //declara una variable de tipo char (solo para un caracter)
	puts("dame una cadena (en realidad es un arreglo)");//imprime en pantalla la cadena argumento 
	gets(cad); //lee por teclado la variable argumento
	puts("Ejemplo de impresion con puts");
	puts(cad); //imprime en pantalla la variable argumento 
	printf("ejemplo de impresion con printf: "); //imprime la cadena argumento 
	printf(cad); //imprime en pantalla la variable argumento 
	printf("\npresiona una tecla y continua automaticamente: ");
	//imprime un salto de linea y la cadena argumento 
	getche();//lee por teclado un caracter y lo almacena en la var c
	//putchar(c);
	printf("presiona una tecla y luego enter: ");
	getchar();//leer un caracter y lo almacena en c mediante enter 
	//putchar(c);
	printf("\npresiona una tecla y continua automaticamente: ");
	fflush(stdin); //vacia el buffer de entrada 
	getch(); //lee un caracter
	putchar(c);
	std::cout << "dame una cadena ahora con cin: ";
	std::cin>> cad;
	cout<<"\n la segunda cadena no tiene espacios: "<<cad;
	cout << "\ndame una cadena con espacios: ";
	fflush(stdin);
	getline(cin, cad2); //esta linea no dara problemas con los espcios en el nombre
	cout << "la cadena es " <<cad2 << " ya con espacios" << "\n";
	//getline(cin, cad); //esto no funciona para un arreglo 
	//cout << "el arreglo es " << cad << "\n";
}