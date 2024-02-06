#include <stdio.h>

// Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero
// e stampi il valore assoluto di tale numero.

int main(void)
{
    int input, value;

    puts("Inserisci un numero:");
    scanf("%d", &input);

    value = (input < 0) ? -input : input;

    printf("Il valore assoluto di %d è %d.\n", input, value);

    return 0;
}
