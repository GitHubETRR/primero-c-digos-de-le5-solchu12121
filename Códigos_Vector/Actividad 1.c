#include <stdio.h>
#define Cero 0
#define Uno 1
void cargarVector(int vector[], int tamaño);
int sumarVector(int vector[], int tamaño);
int main() {
    int tamaño;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tamaño);

    int vector[tamaño]; 
    cargarVector(vector, tamaño);
    int resultado = sumarVector(vector, tamaño);

    printf("La suma de los elementos del vector es: %d\n", resultado);

    return Cero;
}
void cargarVector(int vector[], int tamaño) {
    printf("Ingrese los %d elementos del vector\n", tamaño);
    for (int i = Cero; i < tamaño; i++) {
        printf("Elemento %d: ", i + Uno);
        scanf("%d", &vector[i]);
    }
}

int sumarVector(int vector[], int tamaño) {
    int suma = Cero;
    for (int i = Cero; i < tamaño; i++) {
        suma += vector[i];
    }
    return suma;
}