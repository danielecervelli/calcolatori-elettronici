#include <stdio.h>

int main(void)
{
    // Scrivi una funzione per calcolare il fattoriale di un numero.
    int input;

    printf("Inserisci il numero di cui vuoi calcolare il fattoriale: \n");
    scanf("%d", &input);

    int fact = 1;

    if (input >= 0)
    {
        for (int i = 1; i <= input; i++)
        {
            fact = fact * i;
        }
        printf("Il fattoriale del numero %d è: %d\n", input, fact);
    }
    else
        printf("Il fattoriale di un numero negativo non è definito");

    return 0;
}
