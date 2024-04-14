/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
 */

#include <stdio.h>

void maiorMenor(int *vetor, int tamanho, int *maior, int *menor){

    *menor = *vetor;
    *maior = *vetor;

    for (int i = 1; i < tamanho; ++i) {
        if(vetor[i] > *maior){
            *maior = vetor[i];
        }
        if(vetor[i] < *menor){
            *menor = vetor[i];
        }
    }
}

int main(){

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    int menor, maior;

    printf("Maior:%d\tMenor: %d\n", maior, menor); // lixo de memoria

    maiorMenor(vet, 10, &maior, &menor);

    printf("Maior:%d\tMenor: %d\n", maior, menor);

    return 0;
}
