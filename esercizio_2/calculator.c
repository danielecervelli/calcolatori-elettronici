#include <stdio.h>

float addizione(int num1, int num2)
{
    float risultato = num1 + num2;
    return risultato;
}

float sottrazione(int num1, int num2)
{
    float risultato = num1 - num2;
    return risultato;
}

float moltiplicazione(int num1, int num2)
{
    float risultato = num1 * num2;
    return risultato;
}

float divisione(int num1, int num2)
{
    if (num2 != 0)
    {
        float risultato = (float)num1 / num2;
        return risultato;
    }
    else
    {
        printf("Errore: divisione per zero\n");
        return -1;
    }
}

int main(void)
{
    int operazione, num1, num2;
    float risultato;

    printf("\n-----------Calcolatrice-----------\n");
    printf("Quale operazione vuoi effettuare?\n\n");
    printf("Inserisci \"1\" per un'addizione\n");
    printf("Inserisci \"2\" per una sottrazione\n");
    printf("Inserisci \"3\" per una moltiplicazione\n");
    printf("Inserisci \"4\" per una divisione\n");

    scanf("%d", &operazione);
    printf("----------------------------------\n");

    if (operazione >= 1 && operazione <= 4)
    {
        printf("Inserisci il primo numero: ");
        scanf("%d", &num1);

        printf("Inserisci il secondo numero: ");
        scanf("%d", &num2);

        if (operazione == 1)
        {
            risultato = addizione(num1, num2);
        }
        else if (operazione == 2)
        {
            risultato = sottrazione(num1, num2);
        }
        else if (operazione == 3)
        {
         
            risultato = moltiplicazione(num1, num2);
        }
        else
            risultato = divisione(num1, num2);

        printf("Il risultato è: %.2f\n", risultato);
        printf("----------------------------------\n\n");
    }
    else
    {
        printf("Operazione non valida\n");
        printf("----------------------------------\n\n");
    }

    return 0;
}
