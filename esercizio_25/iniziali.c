#include <stdio.h>
#include <ctype.h>

// Si scriva una funzione in C, denominata iniziali, che valuti quanti caratteri iniziali sono in comune tra due stringhe date.
// La funzione riceve due parametri, entrambi di tipo stringa, e restituisce il numero intero.
int iniziali(char *str1, char *str2) {
    
    int count = 0;

    while (*str1 != '\0' && *str2 != '\0') {
        // Ignora spazi e segnaposto nella prima stringa
        while (isspace(*str1) || !isalpha(*str1)) {
            str1++;
        }

        // Ignora spazi e segnaposto nella seconda stringa
        while (isspace(*str2) || !isalpha(*str2)) {
            str2++;
        }

        // Confronta i primi caratteri delle parole
        if (*str1 == *str2) {
            count++;
        }

        // Passa al prossimo possibile inizio di parola in entrambe le stringhe
        while (!isspace(*str1) && *str1 != '\0') {
            str1++;
        }

        while (!isspace(*str2) && *str2 != '\0') {
            str2++;
        }
    }

    return count;
}

int main(void) {

    char str1[50], str2[50];
    
    printf("Inserisci la prima stringa:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Inserisci la seconda stringa:\n");
    fgets(str2, sizeof(str2), stdin);

    int risultato = iniziali(str1, str2);

    printf("I caratteri iniziali che le due stringhe hanno in comune sono: %d\n", risultato);

    return 0;
}
