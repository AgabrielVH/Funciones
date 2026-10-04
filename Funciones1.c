// Ejemplo de uso de funciones con variables globales

#include <stdio.h>										/* Biblioteca (archivo) que debe buscar para poder interpretar las instrucciones. */

void solicita();										/* Se declara o avisa que se van a utilizar determinados procedimientos. */
void adicion();
void promedio();
 														/* Se declaran las variables que se van a usar y se indica que tipo de valores se van a guardar. */
int nl;												    /* int sirve para numeros enteros   */                              // VARIABLE GLOBAL
float num,calif,suma,prom;								/* float sirve para numeros reales, decimales o booleanos   */      // VARIABLE GLOBAL

int main()												/* Programa principal*/
{
    solicita();
    adicion();											/* Se llaman a ejecutar los procedimientos a seguir; no lleva la palabra void antes.*/
}

void solicita()											/* Procedimiento solicita*/
{
    printf("Cuantas calificaciones vas a promediar?\n");/* Mensaje a pantalla que significa imprime en la pantalla.*/
    scanf("%f",&num);									/* Orden que permite tomar el valor que da el usuario a trav�s del teclado y guardarlo en la variable que queremos. */
}

void adicion()											/* Procedimiento adicion*/
{
    suma=0;    											/* Inicializaci�n de la variable */
    nl=0;												/* Inicializaci�n de la variable */
    do
	{
    	printf("Dame la calificacion a promediar\n");	/* Mensaje a pantalla que significa imprime en la pantalla.*/
        scanf("%f",&calif);								/* Orden que permite tomar el valor que da el usuario a trav�s del teclado y guardarlo en la variable que queremos. */
        nl=nl+1; 										/* Se suma la variable nl+1 para modificar la misma variable */
        suma=suma+calif; 								/* Se suma la variable suma+calif para modificar la misma variable */
	}while(nl<num);										/* Estructura de control while, que lleva adentro la condici�n booleana. */
	promedio(); 										/* Se llama al procedimiento promedio*/
}

void promedio()											/* Procedimiento promedio*/
{
    prom=suma/num; 										/* Divide la variable suma entre num para modificar la variable prom */
    printf("Tu promedio es: %f",prom); 					/* Mensaje a pantalla de la variable prom con el tipo de dato float */
}
