/*
 Faça uma função que receba como parâmetro uma matriz A 4x5 e um vetor
B. A função deve armazenar, no vetor B, a soma de cada linha da matriz A.
Ao final apresentar os elementos da matriz e do vetor.
 */

#include <stdio.h>

void armazenando(int A[4][5], int vetB[4]){

    for (int i = 0; i < 4; ++i) {
        int aux = 0;
        for (int j = 0; j < 5; ++j) {
            aux = aux + A[i][j];
            vetB[i] = aux;
        }
    }

    printf("Novo vetor = [ ");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", vetB[i]);
    }
    printf("]\n");
}

int main(){

    int matrizA[4][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int vetorB[4] = {0};

    printf("\n");

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%*d ", 3, matrizA[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    armazenando(matrizA,vetorB);

    return 0;
}