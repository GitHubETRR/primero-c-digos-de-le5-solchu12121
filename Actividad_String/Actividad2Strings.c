#include <stdio.h>
#include <string.h>
#define cero 0
#define TAM 200
#define diferencia 32
 
void pasaminuscula(char texto[]);
int main() {
    char texto[TAM];
    char opcion;
    do{
        printf ("=====================================================================================================================\n");
        printf ("Bienvenido al programa de texto\n");
        printf ("=====================================================================================================================\n");
        printf("Introduce un texto en mayúsculas: ");
        fgets(texto, sizeof(texto), stdin);
        texto[strcspn(texto, "\n")] = '\0';//saca el salto de linea del vector convirtiendolo en un nule
        pasaminuscula(texto);
        printf("Texto introducido en minuscula: %s\n", texto);
        printf("\n¿Deseas procesar otro texto? (S/N): ");
        scanf(" %c", &opcion); 
        getchar(); // limpia el salto de línea que deja scanf
    }while (opcion == 'S' || opcion == 's');

    printf("\nGracias por usar el programa. ¡Hasta pronto!\n");
    return cero;
}

    
void pasaminuscula(char texto[]){
    for (int i = cero; texto[i] != '\0'; i++){
        if (texto[i] >= 'A' && texto[i] <= 'Z'){
            texto[i] = texto[i] + diferencia;
        }

        // LETRAS CON TILDE
        if ((unsigned char)texto[i] == 0xC3){

            unsigned char c = (unsigned char)texto[i+1];

            if (c == 0x81) texto[i+1] = 0xA1;
            else if (c == 0x89) texto[i+1] = 0xA9;
            else if (c == 0x8D) texto[i+1] = 0xAD;
            else if (c == 0x93) texto[i+1] = 0xB3;
            else if (c == 0x9A) texto[i+1] = 0xBA; 
            else if (c == 0x9C) texto[i+1] = 0xBC; 
            else if (c == 0x91) texto[i+1] = 0xB1;

            i++; 
        }
    }
}