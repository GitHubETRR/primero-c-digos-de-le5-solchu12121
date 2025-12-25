#include <stdio.h>
#define TAM 3
#define cero 0
#define uno 1
#define dos 2
void ingresar_vector(int vector[]);
void producto_escalar (int vector1[],int vector2[],int tam);
int main()
{
    int opcion;
	do
	{
		printf("Bienvenido a calculadora de Producto Escalar\n");
		int vector1[TAM];
		int vector2 [TAM];
		printf("Ingrese valores para vector1:\n");
		ingresar_vector(vector1);
		printf("Ingrese valores para vector2:\n");
		ingresar_vector(vector2);
		printf("Vector1: %4d %4d %4d\n", vector1[cero], vector1[uno], vector1[dos]);
		printf("Vector2: %4d %4d %4d\n", vector2[cero], vector2[uno], vector2[dos]);
		producto_escalar (vector1,vector2,TAM);
		printf ("¿Deseas hacer otra multiplicaciC3n? Ingrese un 1 para si o un 0 para no\n");
		scanf(" %d", &opcion);
	} while (opcion == uno);
	printf ("Gracias por usar la calculadora de Porcuto Escalar");
	return cero;
}
	void ingresar_vector(int vector[])
	{
		printf("Por favor escriba el valor x del vector: ");
		scanf("%d", &vector[cero]);
		printf("Por favor escriba el valor y del vector: ");
		scanf("%d", &vector[uno]);
		printf("Por favor escriba el valor z del vector: ");
		scanf("%d", &vector[dos]);
	}
	void producto_escalar (int vector1[],int vector2[],int tam)
	{
		int result=cero;
		int producto;
		printf ("Entonces el producto escalar es: ");
		for (int i=cero; i<tam; i++)
		{
			producto= vector1[i]*vector2[i];
			result=result+producto;
			printf("%d*%d ", vector1[i], vector2[i]);
			if (i<tam- uno)
			{
				printf("+ ");
			}
		}
		printf(" = %d\n", result);
	}
