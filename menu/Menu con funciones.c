#include <stdio.h>
#include <stdlib.h>
#define SALIR 4
#define SUMA 1
#define RESTA 2
#define TABLA_MUL 3

int menu (void);
int recolecta_num1(void);
int recolecta_num2(void);
void tablamulti (void);
int main() {
    int opcion, num1, num2, resultado, i, nummin,nummax;
    

    do {
        opcion=menu ();
        switch(opcion) {
            case SUMA:
                num1=recolecta_num1();
                num2=recolecta_num2();
                resultado = num1 + num2;
                printf("El resultado es: %d\n", resultado);
                break;
            case RESTA:
                num1=recolecta_num1();
                num2=recolecta_num2();
                resultado = num1 - num2;
                printf("El resultado es: %d\n", resultado);
                break;
            case TABLA_MUL:
                tablamulti();
            break;
                
            case SALIR:
                printf("Programa finalizado\n");
                break;
            default:
                printf("Opcion invalida\n");
        }

    } while(opcion != SALIR);
    

    return 0;
}

int menu (void)
{
    int opcion;
    printf("\nMenu de operaciones. Elija una de las siguientes opciones:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Tabla de multiplicar\n");
    printf("4. Salir\n");
    scanf("%d", &opcion);
    return opcion;
}
int recolecta_num1 (void)
{
    int num1;
    printf("Ingrese un número\n");
    printf("Número 1:\n");
    scanf("%d", &num1);
    return num1;
}
int recolecta_num2 (void)
{
    int num2;
    printf("Ingrese el otro número\n");
    printf("Número 2:\n");
    scanf("%d", &num2);
    return num2;
}
void tablamulti (void)
{
    int num1,nummin,nummax, i;
    printf("Ingrese el número del cual desea ver la tabla: \n");
    scanf("%d", &num1);
    printf("Ingrese desde qué número desea calcular la tabla:\n");
    scanf("%d", &nummin);
    printf("Ingrese hasta qué número desea calcular la tabla:\n");
    scanf("%d", &nummax);
    if (nummin > nummax)
    {
        printf("\nTabla del %d desde %d hasta %d:\n", num1, nummin, nummax);
        for (i = nummin; i >= nummax; i--)
        {
            printf("%d x %d = %d\n", num1, i, num1 * i);
        }
    }
    if (nummin<nummax) 
    {
        printf("\nTabla del %d desde %d hasta %d:\n", num1, nummin, nummax);
        for (i = nummin; i <= nummax; i++)
        {
            printf("%d x %d = %d\n", num1, i, num1 * i);
        }
    }
    if (nummin==nummax)
    {
        printf("\nResultado de %d multiplicado por %d:\n", num1, nummin);
        printf("%d x %d = %d\n", num1, nummin, num1 * nummin);
    }
     
}