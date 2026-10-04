#include <stdio.h>

void suma();

void suma()
{
    int num1 = 2;
    int num2 = 3;

    int resultado = num1 + num2;

    printf("La suma es: %d\n", resultado);
}

int main()
{
    suma();

    return (0);
}