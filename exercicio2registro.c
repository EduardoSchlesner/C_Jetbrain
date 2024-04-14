/*
Um rede de lojas de equipamentos de informática faz diversas vendas ao longo de certo
período. Nesta rede, existem 10 vendedores, que são identificados por um número de 1 a 10.
Cada venda é registrada em uma ficha que contém os seguintes dados: código e nome do
vendedor, código da filial e valor de venda. Faça um algoritmo que imprima o total vendido por
cada vendedor (com base em seu código).
 */

#include <stdio.h>

typedef struct {
    int codigo, codFil;
    char nome[50];
    float valorVenda;
}Vendedor;

int main(){

    Vendedor vendedores[2];

    for (int i = 0; i < 2; ++i) {
        printf("Digite o código do %dº vendedor: ", i+1);
        scanf("%d", &vendedores[i].codigo);

        scanf("%c");

        printf("Digite o nome do %dº vendedor: ", i+1);
        fgets(vendedores[i].nome, 50, stdin);

        printf("Digite o código da filial do %dº vendedor: ", i+1);
        scanf("%d", &vendedores[i].codFil);

        printf("Digite o valor das vendas do %dº vendedor: ", i+1);
        scanf("%f", &vendedores[i].valorVenda);

        printf("\n");
    }

    for (int i = 0; i < 2; ++i) {
        printf("Nome do %dº vendedor: %s", i+1, vendedores[i].nome);
        printf("Código do %dº vendedor: %d\n", i+1, vendedores[i].codigo);
        printf("Código da filial do %dº vendedor: %d\n", i+1, vendedores[i].codFil);
        printf("Valor das vendas do %dº vendedor: %.2f\n", i+1, vendedores[i].valorVenda);
        printf("\n");
    }

    return 0;
}
