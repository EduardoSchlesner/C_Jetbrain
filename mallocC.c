#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x;

    x = malloc(sizeof(int)); //aloca blocos de memoria de byte em byte!! usando sizeof(int)

    if(x != NULL){
        printf("Memoria alocada com sucesso!");
        printf("\nx: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
    }
    else{
        printf("Erro ao alocar memoria!");
    }

    return 0;
}