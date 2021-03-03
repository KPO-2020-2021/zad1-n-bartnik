#include <stdio.h>
#include <stdlib.h>
#include "modul.h"




int main()
{
  
  printf("  PI: %f\n", PI);
  printf("   E: %f\n", E);
  return 0;
}

/*Po kompilacji i konsolidacji za pomocą poleceń:
gcc -c -Wall -pedantic modul.c
gcc -c -Wall -pedantic program.c
gcc -Wall program.o modul.o
program nie wyświetlił niczego na ekranie.

Przy kompilacji i konsolidacji za pomocą poleceń 
g++ -c -Wall -pedantic modul.c
g++ -c -Wall -pedantic program.c
g++ -Wall program.o modul.o 

program wyświetlił komunikat o nieznanej referencji do stalych PI oraz E*/
