#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20];
    int i, len;

    printf("Inserisci stringa:\n");
    fgets(str, sizeof(str), stdin);
    len = strlen(str) - 1;

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            puts("La stringa non è palindroma.");
            return -1;
        }
    }
    puts("La stringa è palindroma.");
    return 0;
}
