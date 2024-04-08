/*
Faça uma função que receba como parâmetro duas duas matrizes reais A e
B de ordem 5, e criar uma matriz C de modo que: cij = 1, se aij da matriz A
existe em algum lugar na matriz B; cij = 0, se aij da matriz A não existir em
B.
 */

#include<stdio.h>

    int teste(int valorDaMatrizA, int matrizBparateste[5][5]){

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(valorDaMatrizA == matrizBparateste[i][j]) {
                    return 1;
                }
            }
        }
        return 0;
    }

    void comparacao(int matrizA[5][5], int matrizB[5][5]){

    int C[5][5] = {0};

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if(teste(matrizA[i][j], matrizB) == 1){
                    C[i][j] = 1;
                }
                else{
                    C[i][j] = 0;
                }
            }
        }

        printf("\nMatriz Final: \n");

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                printf("%*d", 2, C[i][j]);
            }
            printf("\n");
        }

    }

int main(){

    int A[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int B[5][5] = {1,2,33,4,5,44,7,8,9,10,1,2,13,14,7,16,17,18,32,20,21,15,65,24,25};

    printf("Matriz A: \n");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%*d ", 3, A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriz B: \n");

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%*d ", 3, B[i][j]);
        }
        printf("\n");
    }

    comparacao(A,B);

    return 0;
}
