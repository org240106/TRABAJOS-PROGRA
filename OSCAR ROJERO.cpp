#include <iostream>
#include <windows.h>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	//uso de if
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int cal;
cout<<"Dime una calificacion: ";
cin>>cal;
if (cal=70)
cout<<"Aprobatoria\n";
system("pause");
system("cls");
cout<<"Dime otra calificacion: ";
cin>>cal;
if (cal>=70)
cout<<"Suficiente\n";
else
cout<<"No suficiente\n";
system("Pause");
system("cls");
//Lo mismo con ?
cout<<"Dime una calificacion: (Evaluando con ?) ";
cin>>cal;
cal>=70?cout<<"Suficiente\n":cout<<"No suficiente\n";
//if cn mas de una instruccion
cout<<"Dime una calificacion: ";
cin>>cal;
if (cal>=70)
{
	printf("La calificacion obtenida es: ");
	cout<<"Suficiente\n";
}
else
{
	printf("La calificacion obtenida es: ");
	cout<<"No suficiente\n";
}
return 0;
}