/*
• Faça uma função que verifique a existência de uma
substring e retorne a posição inicial da substring;
• Exemplo:
• Entrada: “Aula de estruturas de dados e programação”
• Substring a ser procurada: “strut”
• Retorno: 9
• Caso a substring não esteja contida, retornar -1.
 */

#include <stdio.h>
#include <string.h>

int tamanho(char *pontFrase){
    int valor = strlen(pontFrase);
    return valor;
}

int verificando(char *str, char *substr){

    int tam = tamanho(str);
    int tam2 = tamanho(substr);

    for (int i = 0; i < tam - tam2; ++i) {
        int teste = 1;
        if(*(str+i) == *(substr+0)) {
            for (int j = 0; j<tam2; ++j) {
                if (*(str +i+j) != *(substr + j)){
                    teste = 0;
                    break; // aqui, se a string for diferente da substring quebra e vai para o if
                }
            }
            if(teste){ //aqui verifica se o teste foi verdadeiro, ou seja, igual a 1!
                return i;
            }
        }
    }
    return -1;
}

int main(){

    char string[50] = "Aula de estuturas de dstrutados e programação";
    char substring[10] = "strut";

    int posicao;

    posicao = verificando(string, substring);

    printf("%d", posicao);

    return 0;
} //foi amem
