#include <stdio.h>

// Si scriva un programma in linguaggio C che legga un numero qualsiasi di interi positivi e visualizzi la loro media aritmetica.
// Si può utilizzare lo zero come indicazione che non si intende acquisire più numeri.

int main(void)
{
    int i = 0, num_elements = 0;

    puts("Numero di elementi da inserire?");
    scanf("%d", &num_elements);

    if (num_elements <= 0)
    {
        puts("Il numero inserito è negativo o uguale a 0.");
        return -1;
    }

    int elements[num_elements];
    int sum = 0;
    float average = 0;

    puts("\nRicorda che puoi inserire solo interi positivi.");
    puts("Puoi premere lo \"0\" per smettere di acquisire valori.\n");
    do
    {
        printf("Inserisci il %d° elemento:\n", i + 1);
        scanf("%d", &elements[i]);

        if (elements[i] < 0)
        {
            puts("Errore! È stato inserito un numero negativo.");
            return -1;
        }

        if (elements[i] == 0)
        {
            puts("Non vuoi inserire altri numeri? Calcolo la media dei valori inseriti...");
            break;
        }

        sum = sum + elements[i];
        i++;
    } while (i != num_elements);

    average = (float)sum / (float)num_elements;
    printf("\nLa media dei valori inseriti è %.2f\n", average);

    return 0;
}
