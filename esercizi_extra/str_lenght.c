#include <stdio.h>

// Scrivi un programma che chieda all'utente di inserire una stringa e stampi la lunghezza della stringa.
int strLenght(char str[])
{
    int conta = 0;
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n')
    {
        conta += 1;
        i++;
    }

    return conta;
}

int main()
{
    char str[30];

    printf("Inserisci una stringa: \n");
    fgets(str, sizeof(str), stdin);
    printf("La lunghezza della stringa è di %d caratteri.\n", strLenght(str));

    return 0;
}
