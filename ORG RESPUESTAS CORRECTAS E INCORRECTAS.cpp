#include<iostream>
#include<windows.h>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int rc,ri,rb,cf;
	cout<<"Las respuestas correctas valen 5 puntos c/u\n";
	cout<<"Las respuestas incorrectas restan un punto c/u\n";
	cout<<"Las respuestas en blanco vales 0 puntos c/u\n";
	cout<<"Dime la cantidad de respuestas correctas: ";
	cin>>rc;
	cout<<"Dime la cantidad de respuestas incorrectas: ";
	cin>>ri;
	cout<<"Dime la cantidad de respuestas en blanco: ";
	cin>>rb;
	cf=(rc*5)+(ri*(-1))+(rb*0);
	cout<<"La calificacion final es: "<<cf;
	printf("\nLa calificacion final es: %d",cf);
	cf=rc*5-ri;
	cout<<"\nLa calificacion final es: "<<cf;
	printf("\nLa calificacion final es: %d",cf);
	return 0;
}