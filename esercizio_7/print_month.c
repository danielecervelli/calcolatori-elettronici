#include <stdio.h>

// Dato un numero intero tra 1 e 12, che rappresenta il mese corrente,
// stampare il nome del mese per esteso (“Gennaio” … “Dicembre”).

int main(void)
{
    int input;
    char *month[12] = {"Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};

    puts("Inserisci il numero che rappresenta il mese corrente:");
    scanf("%d", &input);

    if (!(input > 0 && input < 13))
    {
        puts("Il numero inserito non è compreso tra 1 e 12!");
        return -1;
    }

    printf("Siamo a %s.\n", month[input - 1]);

    return 0;
}
