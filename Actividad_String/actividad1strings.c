
#include <stdio.h>
#include <string.h> 
#define MAXCADENA 100
#define Cero 0
#define Uno 1
int Dimension(char texto[]);
int DimensionContandor(char texto[]);

int main() {
    char cadena[MAXCADENA];

    printf("Ingrese un texto: ");
    fgets(cadena, sizeof(cadena), stdin); 

    int largo = Dimension(cadena);
    int i = DimensionContandor(cadena);

    printf("El largo de la cadena con funcion es: %d\n", largo);
    printf("El largo de la cadena con contador es: %d\n", i);

    return Cero;
}

int Dimension(char texto[]) {
    int longitud = strlen(texto);
    if (texto[longitud - Uno] == '\n') {
        longitud--;
    }

    return longitud;
}
int DimensionContandor(char texto[]){
int i = Cero;

    while (texto[i] != '\0' && texto[i] != '\n') {
        i++;
    }

    return i;
}
    
