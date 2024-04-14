/*
Escreva um programa em C que verifique se duas palavras fornecidas
pelo usuário são anagramas uma da outra. Duas palavras são anagramas
se contêm exatamente as mesmas letras, mas em ordens diferentes.

Por exemplo, "amor" e "roma" são anagramas, enquanto "casa" e "cão" não são.
 */

#include <stdio.h>
#include <string.h>

int anagramas(char *pri, char *seg){

    // return 1 ---> sao anag!
    // return 0 ---> nao sao anag!

    int tamPri = strlen(pri);
    int tamSeg = strlen(seg);

    if(tamPri == tamSeg) {
        for (int i = 0; i < tamPri; ++i) {
            int contador = 0;
            for (int j = 0; j < tamSeg; ++j) {
                if(pri[i] == seg[j]){
                    contador = 1;
                    break;
                }
            }
            if(contador == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){

    char frase1[10] = {"amor"};
    char frase2[10] = {"roma"};

    if(anagramas(frase1,frase2) == 1){
        printf("As duas palavras são anagramas!");
    }
    else{
        printf("Não são anagramas!");
    }

    return 0;
}
