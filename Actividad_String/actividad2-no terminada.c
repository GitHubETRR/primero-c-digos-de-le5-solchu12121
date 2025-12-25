#include <stdio.h>
#include <ctype.h> 

void pasaMinuscula(char texto[]);

int main() {
    char cadena[100];

    printf("Ingrese un texto en mayuscula: \n");
    fgets(cadena, sizeof(cadena), stdin); 

    pasaMinuscula(cadena);

    printf("Texto pasado a minusculas: %s", cadena);

    return 0;
}
void pasaMinuscula(char texto[]) {
    int i = 0;
    while (texto[i] != '\0') {
        texto[i] = tolower(texto[i]);
        i++;
    }
}