#include <stdio.h>
#include <errno.h>

// Si desidera sviluppare un programma in linguaggio C per la modifica di un file di testo.
// La modifica consiste nel sostituire, scambiandoli tra loro, due caratteri alfabetici dati.
// Il programma riceve tre parametri a riga di comando:
// il nome del file di testo da elaborare,
// il nome di un secondo file di testo nel quale salvare il risultato,
// ed una stringa di 2 caratteri che specifica i caratteri da scambiare.

int main(int argc, char *argv[])
{
    FILE *file1, *file2;
    int i = 0;
    char str[100];

    if (argc != 4)
    {
        perror("Errore durante il passaggio degli argomenti.");
        return -1;
    }
    else
    {
        printf("Il programma scambierà ogni \"%c\" con ogni \"%c\" presente nel primo file.\n", argv[3][0], argv[3][1]);
    }

    file1 = fopen(argv[1], "r");
    if (file1 == NULL)
    {
        perror("Errore nell'apertura del primo file");
        return -1;
    }

    file2 = fopen(argv[2], "w");
    if (file2 == NULL)
    {
        perror("Errore nell'apertura del secondo file");
        fclose(file1);
        return -1;
    }

    while (fgets(str, sizeof(str), file1) != NULL)
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == argv[3][0])
            {
                str[i] = argv[3][1];
            }
        }
        fputs(str, file2);
    }
    puts("Il risultato è stato salvato nel secondo file.");

    fclose(file1);
    fclose(file2);

    return 0;
}
