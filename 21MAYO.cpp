#include<iostream> //programa que imprime un marco y en su interior
#include<time.h>//random
#include <windows.h>
#include <conio.h>//para usar el getche();
using namespace std;
void gotoxy (int x, int y) {
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
int r, vec[10];
srand(time(0)); // Inicializar la semilla de numeros aleatorios
printf("Maximice la pantalla y presione una tecla");
getche();
system ("CLS") ;
for (r=0;r<=165;r++)//165 ciclo para dibujar las Líneas horizontales
{
gotoxy (r,0);//Línea superior
printf("*");
gotoxy (r,40);//40 Linea inferior
printf("*");
}
for (r=0;r<40;r++)//40 ciclo para las Líneas verticales
{
gotoxy (0,r);//Línea izquierda
printf("*");
gotoxy (165, r);//165 Línea derecha
printf("*");
}
gotoxy (72,17);//72,17
cout<<"Impresion del vector";
for (r=0;r<10;r++)
{
vec[r]=rand ()%100;
gotoxy (80, r+17) ;//80, r+17
printf("%d",vec[r]);
}
gotoxy (40,13) ;//40,13 
getche () ;
 return 0;
}