#include <stdio.h>
#include <math.h> /*Dodana została biblioteka*/


double Dodaj(double, double); /*Przed modyfikacją nie było argumentów w nagłówku funkcji*/


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
/*Sposób kompilacji i konsolidacji dla C:
gcc -Wall -pedantic modul.c program.c
./a.out

Sposób kompilacji i konsolidacji dla C++
g++ -Wall -pedantic modul.c program.c
./a.out */
