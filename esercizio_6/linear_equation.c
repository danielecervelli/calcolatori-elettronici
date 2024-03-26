#include <stdio.h>

// Data l’equazione ax + b = 0 con a e b inseriti da tastiera, scrivere un programma
// per determinare il valore di x, se esiste, che risolve l’equazione.

int main(void)
{
    float a, b, x;

    puts("Equazione: ax + b = 0");

    puts("Inserisci il valore di a:");
    scanf("%f", &a);

    puts("Inserisci il valore di b:");
    scanf("%f", &b);

    if (a == 0)
    {
        if (b == 0)
        {
            puts("L'equazione è indeterminata, ha infinite soluzioni.");
            return 0;
        }
        else
        {
            puts("L'equazione è impossibile, non ha soluzioni.");
            return 0;
        }
    }
    else
    {
        x = -b / a;
    }
    printf("Il risultato dell'equazione è %.2f\n", x);
    return 0;
}
