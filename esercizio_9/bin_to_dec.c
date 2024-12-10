#include <stdio.h>
#include <math.h>

#define N 8

int main(void) 
{
    int bin[N];
    int dec = 0;
    int i;

    printf("Inserisci un numero binario di %d bit, un bit alla volta (dal più significativo al meno significativo).\n\n", N);

    for (i = 0; i < N; i++) 
    {
        printf("%d° bit: ", i + 1);
        scanf("%d", &bin[i]);

        // Verifica che il bit inserito sia valido
        if (bin[i] != 0 && bin[i] != 1) 
        {
            printf("\nErrore: devi inserire solo 0 o 1.\nRiavvia il programma.\n");
            return -1;
        }
    }

    // Calcola il valore decimale con l'aiuto della funzione pow
    // Ovviamente potremmo anche costruire noi una funzione che calcoli le potenze, invece di usarne una già esistente
    for (int i = 0; i < N; i++) 
    {
        dec += bin[i] * pow(2, N - 1 - i);
    }

    printf("\nIl valore decimale del numero binario è: %d.\n", dec);
    return 0;
}
