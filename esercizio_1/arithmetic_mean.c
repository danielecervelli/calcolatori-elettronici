#include <stdio.h>

//  Si scriva un programma in linguaggio C che legga un numero qualsiasi di interi positivi e visualizzi la loro media aritmetica.
//  Si puo` utilizzare lo zero come indicazione che non si intende acquisire più numeri.

int main(void)
{
    int numbers[10] = {20, 34, 35, 32, 77, 34, 56, 34, 23, 44};
    int sum = 0;
    float result;

    int i = 0;
    while (i < 10)
    {
        sum = sum + numbers[i];
        i++;
    }

    result = (float)sum / i;
    printf("La media dei numeri nella lista è di: %.2f\n", result);
}
