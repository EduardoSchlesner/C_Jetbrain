/*
Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
 */

#include <stdio.h>

int strcpy(char *destino, char *origem){
    int i = 0;

    while(*(origem+i) != '\0'){
        *(destino+i) = *(origem+i);
        i++;
    }
    *(destino+i) = '\0';
    return i;
}

int main(){

    char origem[20] = "C programming";
    char destino[20];

    printf("Tamanho: %d\n", strcpy(destino,origem));
    printf("Destino: %s\n", destino);

    return 0;
}
