#include <stdio.h>
#include <ctype.h>

// Si scriva una funzione in C, denominata alltoupper, che converta in maiuscolo tutti i caratteri della stringa passata come parametro
void alltoupper(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main(void)
{
    char str[50];

    puts("Inserisci la stringa: ");
    fgets(str, sizeof(str), stdin);
    alltoupper(str);
    printf("Stringa convertita in maiuscolo: %s", str);

    return 0;
}
