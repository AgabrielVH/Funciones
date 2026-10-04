#include <stdio.h>

int suma();

int suma()
{
    int num1 = 2;
    int num2 = 4;

    int resultado = num1 + num2;

    return resultado;
}

int main()
{
    int resultadodeunasuma = suma();

    printf("La suma es: %d", resultadodeunasuma);

    return (0);
}