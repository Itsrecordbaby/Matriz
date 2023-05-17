#include <stdio.h>

int main() {
    int tamano;

    printf("Ingrese el tamano de la matriz. No olvide de poner un espacio: ");
    scanf("%d", &tamano);

    int matriz[tamano][tamano];

    // Llenar la matriz con ceros
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            matriz[i][j] = 0;
        }
    }

    // Llenar la diagonal con unos
    for (int i = 0; i < tamano; i++) {
        matriz[i][i] = 1;
    }

    // Imprimir la matriz
    printf("Matriz diagonal:\n");
    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
