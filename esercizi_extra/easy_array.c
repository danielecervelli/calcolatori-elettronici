#include <stdio.h>

// Crea un programma che dichiari un array di interi e trovi la somma, la media e il valore massimo.
int array[10] = {3, 4, 56, 32, 7, 12, 35, 75, 1, 34};

int somma(void)
{
    int somma = 0;

    for (int i = 0; i < 10; i++)
    {
        somma += array[i];
    }

    return somma;
}

float media(void)
{
    float media = (float)somma() / 10;

    return media;
}

int valoreMax(void)
{
    int max = array[0];

    for (int i = 1; i < 10; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }

    return max;
}

int main(void)
{
    printf("La somma dei numeri presenti nell'array è di: %d\n", somma());
    printf("La media dei numeri presenti nell'array è di: %f\n", media());
    printf("Il valore massimo tra i numeri presenti nell'array è: %d\n", valoreMax());

    return 0;
}
