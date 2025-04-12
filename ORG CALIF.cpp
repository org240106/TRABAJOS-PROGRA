#include <windows.h>;
#include <iostream>;
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	string nombre;
	int cal1,cal2,cal3,prom;
	cout<<"Dime tu nombre: ";
	cin>>nombre;
	cout<<"Dame la calificacion 1: ";
	cin>>cal1;
	cout<<"Dame la calificacion 2: ";
	cin>>cal2;
	cout<<"Dame la calificacion 3: ";
	cin>>cal3;
	prom=(cal1+cal2+cal3)/3;
	cout<<nombre<<", tu promedio es: "<<prom<<", y tu calificacion final es: ";
	if(prom>=90 and prom<=100)
	{
		cout<< "A";
	}
	else
	{
		if(prom>=80 and prom<=89)
		{
			cout<<"B";
		}
		else
		{
			if(prom>=70 and prom<=79)
			{
			   cout<<"C";
			}
			else
			{
				cout<<"NA";
			}
		}
	}
	return 0;
	
}