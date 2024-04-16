/*
• Faça uma função que receba um vetor de inteiros
por parâmetro, receba também um número adicional;
• A função deve mover os elementos posições à frente.
• Exemplo:
• Entrada: [1, 2, 3, 4, 5] e 2
• Saída: [4, 5, 1, 2, 3]
 */

#include <stdio.h>
#include <stdlib.h>

void movendoVetor(int *vetor, int numero, int tamanho){

    int *outroVet = malloc(tamanho*sizeof(int));

    int j;

    for (int i = 0; i < tamanho; i++) {
        j = (i - numero + tamanho-1) % tamanho; // Calcula a nova posição do elemento
        outroVet[j] = vetor[i];
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = outroVet[i];
    }
    free(outroVet);
}

int main(){

    int *x;
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", & tam);

    printf("\n");

    x = malloc(tam * sizeof(int));

    for (int i = 0; i < tam; ++i) {
        printf("Digite o vetor[%d]: ", i);
        scanf("%d", &x[i]);
    }

    printf("\n");

    for (int i = 0; i < tam; ++i) {
        printf("%d ",x[i]);
    }

    int numMov;

    printf("\n\nDigite o número de casas que você quer mover o vetor: ");
    scanf("%d", &numMov);

    printf("\n");

    movendoVetor(x,numMov,tam);

    printf("Vetor movido: ");
    for (int i = 0; i < tam; ++i) {
        printf("%d ", x[i]);
    }
    printf("\n");

    free(x);

    return 0;
}
