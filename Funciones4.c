#include <stdio.h>

void imprimir(char mensaje[]);

void imprimir(char mensaje[])
{
    printf("%s", mensaje);
}

int main()
{
    imprimir("Deja de ser huevon");

    return 0;
}