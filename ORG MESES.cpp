#include<windows.h>
#include<iostream>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int d,m,a;
	cout<<"Dame una fecha en este formato: ddmmaaaa";
	scanf("%2d%2d%4d",&d,&m,&a);
	cout<<d<<" de ";
	switch(m)
	{
		case 1:
			printf("Enero");
			break;
			case 2:
			printf("Febrero");
			break;
			case 3:
			printf("Marzo");
			break;
			case 4:
			printf("Abril");
			break;
			case 5:
			printf("Mayo");
			break;
			case 6:
			printf("Junio");
			break;
			case 7:
			printf("Julio");
			break;
			case 8:
			printf("Agosto");
			break;
			case 9:
			printf("Septiembre");
			break;
			case 10:
			printf("Octubre");
			break;
			case 11:
			printf("Noviembre");
			break;
			case 12:
			printf("Diciembre");
			break;
			default:
				printf("Mes no valido");
	}
	cout<<" de "<<a;
	return 0;
}