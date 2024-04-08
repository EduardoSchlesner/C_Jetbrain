/*
Faça uma função que receba como parâmetro uma matriz 4x5, a mesma
armazenará em cada elemento a soma dos índices da sua posição dentro da
matriz.
 */

#include<stdio.h>

void SomaDeIndices(int matriz[4][5]){

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            matriz[i][j] = i+j;
        }
    }

    printf("NOVA MATRIZ: \n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}

int main(){

    int matriz[4][5] = {0};

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%*d ", 3, matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    SomaDeIndices(matriz);

    return 0;
}

//perguntar ao professor!
