#include <stdio.h>
#include <stdlib.h>

// Si scriva un programma in linguaggio C per calcolare il massimo comun divisore (MCD) di due numeri interi positivi.
// Il MCD e` definito come il massimo tra i divisori comuni ai due numeri.

int mcd(int x, int y)
{
    int remainder;

    while (y != 0) 
    {
        remainder = x % y;
        x = y;
        y = remainder;
    }
    return x;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        puts("Il numero degli argomenti passati è diverso da 2.");
        return -1;
    }
    printf("I numeri passati come parametri sono %s e %s.\n", argv[1], argv[2]);

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    printf("Il mcd dei due numeri è %d.\n", mcd(num1, num2));
}
