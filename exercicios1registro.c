/*
Faça um algoritmo que receba com os campos nome, endereço e email de contato de uma
pessoa e armazene-os em um registro. Depois, listar os dados na tela.
 */

#include <stdio.h>

typedef struct{
    char nome[50];
    char ender[50];
    char email[50];
}Dados;

int main(){

    Dados dadosPessoais;

    Dados novosdados;

    printf("Digite o nome: ");
    fgets(dadosPessoais.nome, 50, stdin);

    printf("Digite o nome: ");
    fgets(novosdados.nome, 50, stdin);

    printf("Digite o endereço: ");
    fgets(dadosPessoais.ender, 50, stdin);

    printf("Digite o e-mail: ");
    fgets(dadosPessoais.email, 50, stdin);

    printf("\nNome: %s\n", dadosPessoais.nome);
    printf("Endereço: %s\n", dadosPessoais.ender);
    printf("E-mail: %s\n", dadosPessoais.email);

    printf("\nNome: %s\n", novosdados.nome); //testando!!!

    return 0;
}
