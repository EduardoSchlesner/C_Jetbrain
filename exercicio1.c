/*
Faça um programa que modifique as vogais de uma frase.
O programa deve ler uma frase (max. 100 caracteres) e armazeá-la num vetor.
Imprimir a frase lida trocando as vogais, isto é, trocar 'a' pelo 'u', 'e' pelo 'o',
'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e'. Usar uma função void (procedimento) para
realizar a troca e uma função para realizar a impressão da frase trocada. A função deve ter
como parâmetro um ponteiro char referente ao vetor. Dica: Use a função gets() da biblioteca
string.h para realizar a leitura da frase. use o switch para realizar as trocas.
Só considere as letras minúsculas.
 */

#include <stdio.h>
#include <string.h>

int tamanho(char *pontFrase){
    int valor = strlen(pontFrase);
    return valor;
}
//eu fui na venda comprar amendoim
void trocando(char *pontFrase){
    int tam = tamanho(pontFrase);
    for (int i = 0; i < tam; ++i) {
        if(*(pontFrase + i) == 'a'){
            *(pontFrase + i) = 'i';
        }
        else if(*(pontFrase + i) == 'e'){
            *(pontFrase + i) = 'o';
        }
        else if(*(pontFrase + i) == 'i'){
            *(pontFrase + i) = 'u';
        }
        else if(*(pontFrase + i) == 'o'){
            *(pontFrase + i) = 'a';
        }
        else if(*(pontFrase + i) == 'u'){
            *(pontFrase + i) = 'e';
        }
    }
    printf("Frase trocada: %s\n", pontFrase);
    printf("Tamanho da frase = %d", tam);
}

int main(){

    char frase[100] = {"aeiou"};

    trocando(frase);

    return 0;
}//deu bom
