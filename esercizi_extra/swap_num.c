#include <stdio.h>

void swap(int *x, int *y)
{
	// x = &n1 quindi x contiene l'indirizzo di n1 mentre *x contiene il valore di n1
	// y = &n2 quindi y contiene l'indirizzo di n2 mentre *y contiene il valore di n2

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{

	int n1, n2;

	printf("Inserisci il primo numero: ");
	scanf("%d", &n1);
	printf("Inserisci il secondo numero: ");
	scanf("%d", &n2);

	printf("Prima dello scambio: n1 = %d, n2 = %d \n", n1, n2);
	// Passa gli indirizzi delle due variabili alla funzione
	swap(&n1, &n2);

	printf("Dopo lo scambio: n1 = %d, n2 = %d \n\n", n1, n2);
	return 0;
}
