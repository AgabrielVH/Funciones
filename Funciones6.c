#include <stdio.h>

void suma();
void resta(n1, aux);
float multiplicacion();
float division();

void suma()
{
    float n1, n2;

    printf("Escribe el primer elemento: ");
    scanf("%f", &n1);
    printf("Escribe el segundo elemento: ");
    scanf("%f", &n2);

    printf("El resultado es: %f", n1+n2);
}

void resta(n1, aux)
{
    float resultado;

    for (int i=0; i<2; i++)
    {
        printf("Escribe el elemento %d: ");
        scanf("%f", &n1);

        resultado = n1-resultado;
    }

    printf("El resultado es: %f", &resultado);
}

int main()
{
    char opcion;

    printf("--------- Calculadora ---------\n\n");
    printf("Que operación deseas realizar?\n");
    printf("1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\nN) Salir\n");
    printf("Respuesta: ");

    scanf("%s", &opcion);

    switch(opcion)
    {
        case '1':
            suma();
            break;

        case '2':
            float n1, aux;
            resta(n1, aux);
            break;

        case '3':
            multiplicacion();
            break;

        case '4':
            division();
            break;

        case 'N':
            return (0);
            break;

        default:
            printf("\nOpcion invalida. Pruebe de nuevo");
    }

    return (0);
}