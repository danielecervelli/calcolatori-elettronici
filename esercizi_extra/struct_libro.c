#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char titolo[50];
    char autore[50];
} Intestazione;

typedef struct
{
    char titolo[50];
    int num_pagine;
} Capitolo;

typedef struct
{
    Intestazione intestazione;
    Capitolo *capitoli;  // Utilizzeremo un puntatore per l'array di capitoli
} Libro;

int main(void)
{
    int num_capitoli = 2;

    Libro libro;
    strcpy(libro.intestazione.titolo, "Le mie memorie");
    strcpy(libro.intestazione.autore, "Mario Rossi");

    // Allocazione dinamica della memoria per l'array di capitoli
    libro.capitoli = (Capitolo *)malloc(num_capitoli * sizeof(Capitolo));

    // Inizializzazione dei capitoli
    strcpy(libro.capitoli[0].titolo, "Primo");
    libro.capitoli[0].num_pagine = 100;
    strcpy(libro.capitoli[1].titolo, "Secondo");
    libro.capitoli[1].num_pagine = 50;

    // Stampa dei dati
    printf("%s\n", libro.intestazione.autore);
    printf("%d\n", libro.capitoli[1].num_pagine);

    // Libera la memoria allocata dinamicamente
    free(libro.capitoli);

    return 0;
}
