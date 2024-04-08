/*Faça uma função que receba como parâmetro uma matriz 3x3 e encontre o
maior elemento. Depois, passe a posição do número por parâmetro para
uma função que verifica se ele se encontra ou não na diagonal principal. */

#include<stdio.h>

int maiorElem(int matriz[3][3]){

    int auxiliar = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(matriz[i][j] > auxiliar){
                auxiliar = matriz[i][j];
            }
        }
    }
    return auxiliar;
}

void diagPrinc(int maiorvalor, int matriz[3][3]){

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(i == j){
                if(matriz[i][j] == maiorvalor) {
                    printf("O valor %d está na diagonal principal!\n", maiorvalor);
                }
            }
        }
    }
}


int main(){

    int matriz[3][3];

    printf("Digite os valores para a matriz: \n\n");

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matriz[i][j]);
        }
    }

    maiorElem(matriz);

    int maiorValorzaum = maiorElem(matriz);
    int casas = 0;

    do {
        maiorValorzaum = maiorValorzaum / 10;
        casas++;
    } while (maiorValorzaum >= 1);

    printf("\n");

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%*d",casas + 1, matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    diagPrinc(maiorElem(matriz), matriz);

    return 0;
}
