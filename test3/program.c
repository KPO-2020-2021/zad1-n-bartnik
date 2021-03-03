#include <stdio.h>
#include <math.h> /*dodana biblioteka*/
/* #include "modul.c" - należy dołączyć plik modul.c tylko wtedy, gdy następuje kompilacja i konsolidacja programu w języku C++ */

extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
/* Sposób kompilacji i konsolidacji dla języka C po wprowadzonych zmianach:
gcc -Wall -pedantic modul.c program.c
./a.out

Sposób kompilacji i konsolidacji dla języka C++ po wprowadzonych zmianach:
g++ -Wall -pedantic modul.c program.c
./a.out
*/