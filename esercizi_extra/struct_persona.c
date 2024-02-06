#include <stdio.h>
#include <string.h>

// Definisci una struttura "Persona" con campi come nome, età e indirizzo. Scrivi un programma che utilizzi questa struttura.
typedef struct
{
    char nome[20];
    short età;
    char indirizzo[30];
} Persona;

int main(void)
{
    Persona p1;
    strcpy(p1.nome, "Mario");
    p1.età = 20;
    strcpy(p1.indirizzo, "Via Roma 32");

    printf("Il nome della prima persona è: %s\n", p1.nome);
    printf("L'età della prima persona è: %d\n", p1.età);
    printf("L'indirizzo della prima persona è: %s\n", p1.indirizzo);

    return 0;
}
