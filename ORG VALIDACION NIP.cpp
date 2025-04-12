#include <iostream>
#include <windows.h>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int nip=123;
	int intento=0;
	cout<<"Teclea tu nip: ";
	cin>>intento;
	if(intento==nip);
	cin>>intento;
	if(intento==nip)
	{
		cout<<"**correcto**\n";
		cout<<intento<<" es tu NIP";
	}
	else
	{
		cout<<"**Incorrecto**\n";
		if(intento>nip)
		{
			cout<<"Demasiado alto";
		}
		else
		{
			cout<<"Demasiado bajo";
		}
	}
	return 0;
}