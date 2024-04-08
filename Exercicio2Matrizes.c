/*Faça uma função que receba como parâmetro (matriz) as alturas de dez
atletas de 5 delegações que participarão das olimpíadas e imprima a maior
altura de cada delegação.*/

#include<stdio.h>

void funcAtletas(){

    char deleg[2][50];

    for (int i = 0; i < 2; ++i) {
            printf("Digite o nome da %dº delegação: ", i+1);
            scanf("%99s", deleg[i]);
    }

    int alturas[2][3];

    int aux1 = 0;
    int aux2 = 0;

    printf("\nDigite as alturas de cada atleta em centímetros: \n\n");

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("Atleta %d da delegação do(a) %s: ", j + 1, deleg[i]);
            scanf("%d", &alturas[i][j]);
            printf("\n");

            if (alturas[0][j] > aux1){
                aux1 = alturas[0][j];
            }
            if (alturas[1][j] > aux2){
                aux2 = alturas[1][j];
            }
        }
    }

    printf("O maior atleta da delegação %s tem %d cm!\n",deleg[0], aux1);
    printf("O maior atleta da delegação %s tem %d cm!\n",deleg[1], aux2);

}

int main(){
    funcAtletas();
    return 0;
}