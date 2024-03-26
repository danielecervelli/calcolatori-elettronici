#include <stdio.h>

// Scrivere un programma in linguaggio C per la rappresentazione del triangolo di Floyd.
// Riceve da tastiera un numero intero N e visualizza le prime N righe.

void floyds_triangle(int rows)
{
    int count = 1;

    puts("Triangolo di Floyd:");
    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("%d ", count);
            ++count;
        }
        printf("\n");
    }
}

int main(void)
{
    int N;
    
    printf("Inserisci il numero di righe del triangolo di Floyd: ");
    scanf("%d", &N);
    
    floyds_triangle(N);

    return 0;
}
