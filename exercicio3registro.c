/*
Suponha que você queira armazenar seus gastos mensais com água, energia elétrica e
telefone, referentes ao ano passado. Faça um algoritmo que leia estes gastos e depois: mostre os
meses em que houve mais gasto com água, luz e telefone e a média de gasto com cada
categoria.
 */

#include <stdio.h>
#include<stdlib.h>

typedef struct {
    float *gastosAgua;

    float *gastosLuz;

    float *gastosTele;
}Gastos;

void maiorValorMes(float **pont, char **typeofcash){
    // MAIOR VALOR DO MES

    float maior = 0;
    int mes;

    for (int i = 0; i < 3; ++i) {
            if (**(pont+i) > maior){
                maior = **(pont+i);
                mes = i+1;
        }
    }
    printf("\nO maior valor da conta de %s foi do %dº mes, custando %.2f reais!\n", *typeofcash, mes, maior);
}

int lendo(float *gasto, char *tipodegasto){

    gasto = (float *)malloc(3 * sizeof(float)); //aqui aloquei o tamanho do ponteiro que o usuario digitar!

    if (gasto == NULL) {  // Se malloc() não puder alocar a quantidade solicitada de memória (devido a falta de memória disponível, por exemplo), ele retornará NULL.
        printf("Erro ao alocar memória!");
        return 1;
    }

    for (int i = 0; i < 3; ++i) { //2 = 2 meses do ano!
        printf("Digite os gastos com %s do %dº mes: ", tipodegasto, i + 1);
        scanf("%f", &*(gasto + i));
    }

    maiorValorMes(&gasto,tipodegasto);

    //acabou maior valor do mes!!


    // MEDIA DOS GASTOS

    float soma = 0;
    float divisao = 0;

    for (int i = 0; i < 3; ++i) {
        soma += *(gasto+i);
        divisao++;
    }

    float media;

    media = soma/divisao;

    //acabou media!!

    //prints:::

    printf("A média dos valores gastos com %s nos 3 meses foi de: %.2f\n\n",tipodegasto, media);

    free(gasto);
    return 0;
}

int main(){

    Gastos gastos;

    char agua[10] = "Água";
    char luz[10] = "Luz";
    char telefone[10] = "Telefone";

    lendo(gastos.gastosAgua, agua);
    lendo(gastos.gastosLuz, luz);
    lendo(gastos.gastosTele, telefone);

    return 0;
}
