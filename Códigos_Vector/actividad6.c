#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define Cero 0
#define LIM 71
#define MIN 20
#define uno 1

void CargaVector(int vec[]);
void InvertirVector(int vecOriginal[], int vecInvertido[]);
void MostrarVector(int vec[], int tamaño);

int main(){
    int vectorOriginal[TAM];
    int vectorInvertido[TAM];

    srand(time(NULL));

    CargaVector(vectorOriginal);
    InvertirVector(vectorOriginal, vectorInvertido);

    printf("Vector original:\n");
    MostrarVector(vectorOriginal, TAM);

    printf("\nVector invertido:\n");
    MostrarVector(vectorInvertido, TAM);

    return Cero;
}

void CargaVector(int vec[]) {
    for(int i = Cero; i < TAM; i++) {
        vec[i] = MIN + rand() % LIM;  // 90 - 20 + 1 = 71
    }
}
void InvertirVector(int vecOriginal[], int vecInvertido[]) {
    for(int i = Cero; i < TAM; i++) {
        vecInvertido[i] = vecOriginal[TAM - uno - i];
    }
}

void MostrarVector(int vec[], int tamaño) {
    for(int i = Cero; i < tamaño; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

}