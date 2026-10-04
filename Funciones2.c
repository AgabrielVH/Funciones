#include <stdio.h>

int power(int arg, int exp); // Le avisas al programa que vas a utilizar esta función

int main()
{
    int a = 2; // Declaramos las variables
    int b = 3;
    int res = power(a, b); // Llamamos a la función y ponemos a las variables como argumento

    printf("El valor de 2 elevado al cubo es: %d\n", res); // Cambié &d por %d
    return 0;
}

int power(int arg, int exp) // Cambié el nombre de la función
{
    int res = 1;

    for (int i = 0; i < exp; i++)
    {
        res *= arg;
    }
    return res;
}
