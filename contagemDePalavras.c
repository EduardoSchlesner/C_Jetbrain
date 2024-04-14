/*
Escreva um programa em C que conte o número de palavras
em uma frase fornecida pelo usuário. Uma palavra é
definida como uma sequência contínua de caracteres
alfabéticos (letras), separada por um ou mais
espaços em branco.

Por exemplo, se o usuário fornecer a frase "O gato preto pula alto",
o programa deve imprimir "A frase possui 5 palavras".
 */

#include <stdio.h>
#include <string.h>

int contagem(char *frase){

    int tam = strlen(frase);
    int contagem = 0;

    for (int i = 0; i < tam; ++i) {
        if(frase[i] == ' ' || frase[i] == '\0'){
            contagem++;
        }
    }
    return contagem + 1;
}

int main(){

    char frase[50]; //= {"O gato preto pula alto"};

    printf("Digite a frase: ");
    fgets(frase, 50, stdin);

    int numPalavras = contagem(frase);

    printf("%d", numPalavras);

    return 0;
}
