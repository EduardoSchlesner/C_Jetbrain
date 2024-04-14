/*
Escreva um programa em C que solicite ao usuário uma palavra e verifique se ela é um
palíndromo (ou seja, se ela é a mesma quando lida da esquerda para a direita e vice-versa).
Ignore espaços e diferenciação entre maiúsculas e minúsculas.
 */

// DEIXAR AS LETRAS MINUSCULAS : strlwr();

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int testando(char *novovetor, char *wordd, int tamanho){

    for (int i = 0; i < tamanho; ++i) {
        if(novovetor[i] != wordd[i]){
            return 0;
        }
    }
    return 1;
}

 void palindrono(char word[50]){

    int tam = strlen(word) - 1; // -1 remove o espaco do caracter!!!!!!
    char newvet[tam];

     int j = 0;
     for (int i = tam - 1; i >= 0; --i) {
         newvet[j] = word[i];
         j++;
     }

     if(testando(newvet, word, tam) == 1){
         printf("A palavra é um palindromo!\n");
     }
     else{
         printf("A palavra não é um palindromo!");
     }
 }

void espacos(char *entrada, char *saida) {

    //IGNORANDO OS ESPAÇOS:
    /* O segredo é varrer a string de entrada, caracter a caracter,
     e se o caracter lido for diferente de um espaco em branco,
     ele será copiado para a string de saida, caso contrário,
     será ignorado.*/

    int j = 0;
    for (int i = 0; entrada[i] != '\0'; ++i) {  //Essa parte do código é um loop que percorre cada caractere da string entrada até encontrar o caractere nulo (\0), que marca o final da string em C.
        if (entrada[i] != ' ') {
            saida[j] = entrada[i];
            j++;
        }
    }
    saida[j] = '\0'; // Adicionar terminador nulo ao final da string de saída
}

int main(){

    char palavra[50];
    char buffer[50];

    printf("Digite a palavra que voce deseja: ");
    fgets(palavra, 50, stdin);

    // MUDANDO A PALAVRA PARA O MINUSCULO:
    for(int i = 0; palavra[i] != '\0'; i++) {
        palavra[i] = tolower(palavra[i]);
    }

    espacos(palavra, buffer);

    palindrono(buffer);

    return 0;
}
