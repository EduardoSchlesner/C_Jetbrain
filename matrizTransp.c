//
// Created by Eduardo Schlesner on 07/04/24.
//

//Faça uma função que receba como parâmetro uma matriz 2x3, gere e
//imprima uma nova matriz, neste caso, transposta. A matriz transposta é
//gerada trocando a linha pela coluna.

#include<stdio.h>

void matrizTransp(int matriz[2][3]){

    int matrizTransp[3][2] = {0};

    for (int i = 0; i<3; i++) {
        for (int j=0; j<2; j++) {
            matrizTransp[i][j] = matriz[j][i];
        }
    }

    for (int i=0; i<3; i++) {
        for (int j=0; j<2; j++) {
            printf("%*d", 2, matrizTransp[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){

    int matrizNorm[2][3];

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("Digite o valor da matriz [%d][%d]: ", i,j);
            scanf("%d", &matrizNorm[i][j]);
        }
    }

    printf("\n");

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%*d", 2, matrizNorm[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    matrizTransp(matrizNorm);

    return 0;
}
