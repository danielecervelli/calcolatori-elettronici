#include <stdio.h>

int main(void)
{
    int i, j, k;
    char str1[30], str2[30];

    printf("Inserisci una stringa: ");
    fgets(str1, sizeof(str1), stdin);

    k = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        int count = 0;

        // Controlla se il carattere è già apparso prima
        for (j = 0; j < i; j++)
        {
            if (str1[i] == str1[j])
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            str2[k++] = str1[i];
        }
    }

    str2[k] = '\0';
    printf("Stringa senza duplicati: %s", str2);

    return 0;
}
