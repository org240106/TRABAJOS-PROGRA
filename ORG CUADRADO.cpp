#include<iostream>
using namespace std;
void cuad1(int x);
void cuad2(int &x);
int main(void)
{
	int x;
	cout<<"Dame un valor para elevar al cuadrado: ";
	cin>>x;
	cout<<"x="<<x<<" despues de enviarla a la funcion 1";
	system("\nPAUSE");
	cuad1(x);
	cout<<"\nx="<<x<<" despues de enviarla a la funcion 1";
	system("\nPAUSE");
	cuad2(x);
	cout<<"\nx="<<x<<" despues de enviarla a la funcion 2";
	return 0;
}
void cuad1(int x)
{
	x=x*x;
	cout<<"\nx="<<x<<" DENTRO de la funcion 1";
	system("\nPAUSE");
}
void cuad2(int &x)
{
	x=x*x;
	cout<<"\nx="<<x<<" DENTRO de la funcion 2";
	system("\nPAUSE");
}