#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

/*
Si scriva un programma in linguaggio C che, dato un numero reale D immesso da tastiera, calcoli e stampi:
1. l’area del quadrato di lato D
2. l’area del cerchio di diametro D
3. l’area del triangolo equilatero di lato D
*/

float squareArea(float num)
{
    float result;

    result = num * num;
    return result;
}

float circleArea(float num)
{
    float result;

    result = (M_PI * num * num) / 4;
    return result;
}

float triangleArea(float num)
{
    float result;

    result = (sqrt(3) / 4) * num * num;
    return result;
}

int main(void)
{
    float input;

    puts("Inserisci un numero reale per calcolare l'area del quadrato, del cerchio e del triangolo equiltero:");
    scanf("%f", &input);

    printf("L'area di un quadrato di lato %.2f è %.2f\n", input, squareArea(input));
    printf("L'area di un cerchio di diametro %.2f è %.2f\n", input, circleArea(input));
    printf("L'area di un triangolo equilatero di lato %.2f è %.2f\n", input, triangleArea(input));

    return 0;
}
