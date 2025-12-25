#include <stdio.h>
#include <string.h>
#define TAM 200
#define cero 0
#define uno 1|
void invertir(char texto[], char invertida[]);

int main()
{
char texto[TAM];
char invertida [TAM];
    char opcion;
    do{
        printf ("=====================================================================================================================\n");
        printf ("Bienvenido al programa de texto\n");
        printf ("=====================================================================================================================\n");
        printf("Introduce un texto: ");
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = '\0';
        invertir(texto,invertida);
        printf("Texto introducido invertido: %s\n", invertida);
        printf("\n¿Deseas procesar otro texto? (S/N): ");
        scanf(" %c", &opcion); 
        getchar();
    }while (opcion == 'S' || opcion == 's');

    printf("\nGracias por usar el programa. ¡Hasta pronto!\n");
    return cero;
}

void invertir(char texto[], char invertida[]) {
    int lon;
    for (lon = cero; texto[lon] != '\0'; lon++);
    int j = cero;
    for (int i = lon - uno; i >= cero; i--) {
        invertida[j] = texto[i];
        j++;
    }
    invertida[j] = '\0';
}