#include<windows.h>
#include<iostream>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int x,factorial;
	cout<<"Dime un numero para calcular su factorial: ";
	cin>>factorial;
	cout<<factorial;
	for (x=factorial-1;x>=1;x--){
		cout<<"X"<<x;
		factorial=factorial*x;
	}
	cout<<"="<<factorial;
	return 0;
}