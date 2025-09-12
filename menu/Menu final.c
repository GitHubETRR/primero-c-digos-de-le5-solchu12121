#include <stdio.h>
#include <stdlib.h>
#define SALIR 4
#define SUMA 1
#define RESTA 2
#define TABLA_MUL 3


int main() {
    int opcion, num1, num2, resultado, i, nummin,nummax;

    do {
        printf("\nMenu de operaciones. Elija una de las siguientes opciones:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Tabla de multiplicar\n");
        printf("4. Salir\n");
        scanf("%d", &opcion);

        switch(opcion) {
            case SUMA:
                printf("Ingrese dos numeros para sumar\n");
                printf("Número 1:\n");
                scanf("%d", &num1);
                printf ("Número 2:\n");
                scanf("%d", &num2);
                resultado = num1 + num2;
                printf("El resultado es: %d\n", resultado);
                break;
            case RESTA:
                printf("Ingrese dos numeros para restar\n");
                printf ("Número 1:\n");
                scanf("%d", &num1);
                printf ("Número 2: \n");
                scanf("%d", &num2);
                resultado = num1 - num2;
                printf("El resultado es: %d\n", resultado);
                break;
            case TABLA_MUL:
                printf("Ingrese el número del cual desea ver la tabla: \n");
                scanf("%d", &num1);
                printf("Ingrese desde qué número desea calcular la tabla:\n");
                scanf("%d", &nummin);
                printf("Ingrese hasta qué número desea calcular la tabla:\n");
                scanf("%d", &nummax);
                if (nummin > nummax) {
                    printf("\nTabla del %d desde %d hasta %d:\n", num1, nummin, nummax);
                    for (i = nummin; i >= nummax; i--) {
                        printf("%d x %d = %d\n", num1, i, num1 * i);
                    }
                }
                if (nummin<nummax) {
                    printf("\nTabla del %d desde %d hasta %d:\n", num1, nummin, nummax);
                    for (i = nummin; i <= nummax; i++) {
                        printf("%d x %d = %d\n", num1, i, num1 * i);
                        
                    }
                }
                if (nummin==nummax){
                    printf("\nResultado de %d multiplicado por %d:\n", num1, nummin);
                    printf("%d x %d = %d\n", num1, nummin, num1 * nummin);
                }
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