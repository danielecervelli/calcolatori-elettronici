#include <stdio.h>

// Scrivi un programma che stampi i numeri da 1 a 10 utilizzando un ciclo while, for e do-while.
void printWhile(void)
{
	int i = 1;

	while (i < 11)
	{
		printf("%d\n", i);
		i++;
	}
}

void printFor(void)
{
	for (int i = 1; i < 11; i++)
	{
		printf("%d\n", i);
	}
}

void printDo(void)
{
	int i = 1;

	do
	{
		printf("%d\n", i);
		i++;
	} while (i < 11);
}

int main(void)
{
	printf("I numeri da 1 a 10 stampati tramite la funzione 'printWhile': \n");
	printWhile();
	printf("\n");

	printf("I numeri da 1 a 10 stampati tramite la funzione 'printFor': \n");
	printFor();
	printf("\n");

	printf("I numeri da 1 a 10 stampati tramite la funzione 'printDo': \n");
	printDo();
	printf("\n");

	return 0;
}
