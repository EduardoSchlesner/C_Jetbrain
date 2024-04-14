/*
#include <stdio.h>

int main(){

    int *p;
    char *p2;
    float *p3;

    printf("Tamanho: %d bytes.\n", sizeof(p)); //dobro de um int
    printf("Tamanho: %d bytes.\n", sizeof(p2));
    printf("Tamanho: %d bytes.\n", sizeof(p3));
    //independente do tipo, ocupa o mesmo tamanho de memoria
    //variavel p recebe um endereco de memoria! que sempre tem o mesmo tamanho!



    return 0;
}*/

/*
#include <stdio.h>

void imrimir(int *num){
    printf("%d\n", *num); //imprimindo o conteudo apontado pelo ponteiro
    *num = 80;
}

int main(){

    int idade = 35;

    imrimir(&idade);
    printf("no main: %d\n", idade);


    return 0;
}
*/
/*

#include <stdio.h>
void teste(int vet[], int tam){
    for (int i = 0; i < tam; ++i) {
        vet[i] = vet[i] * 2;
    }
    printf("\n");
}

void imprime(int vet[], int tam){
    for (int i = 0; i < tam; ++i) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main(){

    int vet[10] = {45,89,68,25,17,76,34,29,57,44};

    imprime(vet, 10);
    teste(vet, 10);
    imprime(vet,10);

    return 0;
}*/

/*
#include <stdio.h>

void imprime(int vet[], int tam){
    for (int i = 0; i < tam; ++i) {
        printf("%d ", *(vet + i)); //aritmetica de ponteiros
    }
    printf("\n");
}

int main(){

    int vet[10] = {45,89,68,25,17,76,34,29,57,44};

    imprime(vet, 10);

    return 0;
}*/

//como criar um ponteiro para uma struct:

/*
#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

void imprimirData(Data *x){
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano); //com ponteiros para struct usamos essa flecha (->) !!!!!
}

int main(){

    Data data;
    Data *p;

    p = &data; //p recebe data

    printf("Data: %p\tp: %p\n", &data, p);

    data.dia = 29;
    data.mes = 2;
    data.ano = 2024;

    imprimirData(p);

    printf("%d/%d/%d\n", data.dia, data.mes, data.ano); //aqui usamos a struct normalmente, entao usamos o ponto (.) !!!!!

    return 0;
}*/

//ponteiros para ponteiros::::

#include <stdio.h>

int main(){

    int A = 100, *B, **C, ***D; //quantos ponteiros para ponteiros quiser!

    B = &A;
    C = &B; //ponteiro duplo tem que apontar para ponteiro!!!!

    printf("Endereco de A: %p\tConteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\tConteudo de A: %p\n", &B, B);
    printf("Conteudo apontado por B: %d\n", *B); // usamos asterisco : criando variavel, ou pegando o conteudo apontado por esta variavel!!!!

    printf("Endereco de C: %p\tConteudo de C: %p\n", &C, C);
    printf("Conteudo apontado por C: %d\n", **C);

    return 0;
}
