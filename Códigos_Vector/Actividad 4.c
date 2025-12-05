#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100
#define Cero 0
#define inicio 1
#define num_min 10
#define dif 31

void ingresar_valores(int vector[]);
int encontrarMAX(int vector[]);
int encontrarMIN(int vector[]);
void posiciones_max(int vector[], int max);
int main()
{
    int max, min;
    printf("Bienvenido a Analizador de Números Aleatorios\n");
    int vector [TAM];
    srand(time(NULL));
    ingresar_valores(vector);
    max=encontrarMAX(vector);
    min=encontrarMIN(vector);
    printf("El número más grande de los escritos anteriormente es: %d\n", max);
    posiciones_max (vector,max);
    printf("El número más chico de los escritos anteriormente es: %d\n", min);
    return Cero;
}





void ingresar_valores(int vector[])
{
    for (int i=Cero;i<TAM;i++)
    {
        vector[i] = (rand() % dif) + num_min;
    }
    printf ("Valores generados\n");
    for (int i=Cero;i<TAM;i++)
    {
         printf("%2d ", vector[i]); // %2d nos indica el ancho, para que quede prolijo
        if ((i + inicio) % num_min == Cero)   
        {
            printf("\n");
        }
    }
     printf("======================================================================================================================\n");
}
int encontrarMAX(int vector[])
{
    int max;
    max=vector[Cero];
    for (int i=inicio;i<TAM;i++)
    {
        if (max<vector[i])
        {
            max=vector[i];
        }
    }
    return max;
}
int encontrarMIN(int vector[])
{
    int min;
    min=vector[Cero];
    for (int i=inicio;i<TAM;i++)
    {
        if (min>vector[i])
        {
            min=vector[i];
        }
    }
    return min;
}
void posiciones_max(int vector[], int max)
{
    printf ("El número mayor se encuentra en las siguientees posiciones dentro del vector:\n");
    for (int i=Cero;i<TAM;i++ )
    {
        if (vector[i]==max)
        {
            printf ("%d\n",i);
        }
    }
}
