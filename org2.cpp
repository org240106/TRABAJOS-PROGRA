#include <iostream>
#include<windows.h>
using namespace std;
int main()
//OSCAR ROJERO GARAY 24041054
{
	SetConsoleOutput(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	int numh, numm, total;
	float pcth,pctm;
	cout<<"Dime la cantidad de hombres asistentes: ";
	cin>>numm;
	total=numh+numm;
	cout<<"El total de asistentes es: "<<total<<"\n";
	pcth=numh*100/total;
	pctm=numm*100/total;
	cout<<"hombres: " "pcth"%"<<" Mujeres: "<<pctm<<"%";
	return 0;
}