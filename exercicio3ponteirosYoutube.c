/*
Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.
 */

#include <stdio.h>

int main(){

    int vet[10] = {12,43,65,87,43,21,65,98,13,77};

    for (int i = 0; i < 10; ++i) {
        printf("%d , end: %p\n", *(vet + i), vet + i); //*(vet + i) é a mesma coisa que fazer vet[i]!!!
    }

    return 0;
}
