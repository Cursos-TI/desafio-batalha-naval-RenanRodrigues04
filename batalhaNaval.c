#include <stdio.h>

int main() {
    int matriz[10][10];

    // Inicializa toda a matriz com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = 0;
        }
    }

    // Navio 1 (horizontal) - tamanho 3
    matriz[3][3] = 3;
    matriz[3][4] = 3;
    matriz[3][5] = 3;

    // Navio 2 (vertical) - tamanho 3
    matriz[6][4] = 3;
    matriz[7][4] = 3;
    matriz[8][4] = 3;

    // Imprime letras das colunas
    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // Exibe a matriz com números nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // número da linha

        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}