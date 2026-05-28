#include <stdio.h>

int main() {
    int matriz[10][10] = {0}; //Inicializando a matriz somente com valores '0' em todas as posições.

    // Navio 1 (horizontal) - tamanho 3
    matriz[3][3] = 3;
    matriz[3][4] = 3;
    matriz[3][5] = 3;

    // Navio 2 (vertical) - tamanho 3
    matriz[6][4] = 3;
    matriz[7][4] = 3;
    matriz[8][4] = 3;

    // Imprimindo letras das colunas
    printf("   "); //Espaço dado para a letra ficar exatamente em cima da coluna.
    for (int j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // Exibe a matriz com números nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d  ", i); // número da linha

        for (int j = 0; j < 10; j++) { //exibindo a matriz.
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
