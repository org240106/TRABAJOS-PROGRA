#include <iostream>
#include<windows.h>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float radio, area=0.0, circunferencia=0.0;
	const float PI=3.1416;
	cout<<"PI="<<PI<<"\n";
	cout<<fixed;
	cout.precision(4);
	cout<<"Dame el radio de un circulo: ";
	cin>>radio;
	area=PI*radio*radio;
	circunferencia=PI*radio*2;
	cout<<"Usando precision a cuaatro decimales con fixed\n";
	cout<<"Para un circulo de radio: "<<radio<<"\n";
	cout<<"El area es: "<<area<<"\n";
	cout<<"La circunferencia es: "<<circunferencia<<"\n";
	cout<<"Usando precision a dos decimales con printf\n";
	printf("Para un circulo de radio: %5.2f\n", radio);
	printf("El area es: %5.2f\n",area);
	printf("La circunferencia es: %5.2f\n",circunferencia);
	return 0;
}