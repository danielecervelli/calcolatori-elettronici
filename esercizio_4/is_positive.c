#include <stdio.h>

// Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero
// e stampi un messaggio che indichi se tale numero sia positivo oppure negativo.

int main(void)
{
    int input;

    puts("Inserisci un numero:");
    scanf("%d", &input);

    if (input == 0)
    {
        puts("Il numero inserito è lo 0.");
    }

    if (input > 0)
    {
        printf("Il numero %d è positivo.\n", input);
    }
    else
    {
        printf("Il numero %d è negativo.\n", input);
    }

    return 0;
}
