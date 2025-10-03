#include <stdio.h>
#include <stdlib.h>   // Para rand() y srand()
#include <time.h>     // Para time()

#define TAMANO_VEC 50
#define inicio 10
#define Cero 0
void posiciones_max(int vector[],int max);
int encontrarMAX(int vector []);
    
int main() {
    int vector[TAMANO_VEC];
    int i;
    int max;
    
    srand(time(NULL));

    //vector, valores aleatorios entre 10 y 20 
    for (i = 0; i < TAMANO_VEC; i++) {
        vector[i] = rand() % (11 + 10); // (20 - 10 + 1) = 11
    }

    printf("Vector: ");
    for (i = 0; i < TAMANO_VEC; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    max=encontrarMAX(vector);
    printf ("El número mas grande es:%d\n ", max);
    posiciones_max(vector, max);

    return 0;
}
int encontrarMAX(int vector []) {
int max;
    max=vector[Cero];
    for (int i=inicio;i<TAMANO_VEC;i++)
    {
        if (max<vector[i])
        {
            max=vector[i];
        }
    }
    return max;
}

void posiciones_max(int vector[], int max)
{
    printf ("El número mayor se encuentra en las siguientees posiciones dentro del vector:\n");
    for (int i=Cero;i<TAMANO_VEC;i++ )
    {
        if (vector[i]==max)
        {
            printf ("%d\n",i);
        }
    }
}
