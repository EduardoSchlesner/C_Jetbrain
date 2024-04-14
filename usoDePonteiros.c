#include <stdio.h>

//ponteiro: variavel que armazena um endereco de memoria

int main(){

    int num = 10;
    int *p; //ponteiro para um regiao da memoria

    p = &num; //p recebe o endereco de num

    printf("Valor de num: %d\n", num); //conteudo
    printf("Endereco de num: %p\n", &num); //endereco do conteudo

    printf("\nValor de p: %p\n", p); //endereco de memoria
    printf("Endereco de p: %p\n", &p); //endereco do ponteiro
    printf("Endereco apontado por p: %d\n", *p); //endereco do conteudo


    //agora com char:
    char num1 = 'f';
    char *p1; //ponteiro para um regiao da memoria

    p1 = &num1; //p recebe o endereco de num

    printf("\n\n\nValor de num1: %c\n", num1); //conteudo
    printf("Endereco de num1: %p\n", &num1); //endereco do conteudo

    printf("\nValor de p1: %p\n", p1); //endereco de memoria
    printf("Endereco de p1: %p\n", &p1); //endereco do ponteiro
    printf("Endereco apontado por p1: %c\n", *p1); //endereco do conteudo


    return 0;
}