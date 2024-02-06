#include <stdio.h>
#include <stdlib.h>

// Scrivi un programma che chieda all'utente di inserire un numero e stampi se è positivo, negativo o zero.
int main(void)
{

    char input[10];

    printf("Inserisci un numero: ");

    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        printf("Errore durante la lettura dell'input.\n");
        return 1;
    }

    int num = atoi(input);

    if (num == 0)
    {
        printf("Il numero inserito è lo 0.\n");
    }
    else if (num > 0)
    {
        printf("Il numero inserito è un numero positivo.\n");
    }
    else
        printf("Il numero inserito è un numero negativo.\n");
    
    return 0;
}
