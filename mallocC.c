#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main(){

//    int *x;

    char *x;

*/
/*
    x = malloc(sizeof(int)); //aloca blocos de memoria de byte em byte!! usando sizeof(int)
    malloc recebe apenas 1 parametro! Calloc é bucha!
 *//*


//    x = calloc(1, sizeof(int)); // tambem retorna null!
    x = calloc(1, sizeof(char));

    if(x != NULL){
        printf("Memoria alocada com sucesso!");
        printf("\nx: %c\n", *x);
        *x = 'H';
        printf("x: %c\n", *x);
    }
    else{
        printf("Erro ao alocar memoria!");
    }

    return 0;
}*/

 //Como alocar um vetor dinamico:
 int main(){

     int tam, *vet; //sempre um ponteiro para vetor!

     printf("Digite o tamanho do vetor: ");
     scanf("%d", &tam);
     srand(time(NULL));

     vet = malloc(tam * sizeof(int));

     if (vet){
         printf("Memoria alocada com sucesso!\n");
         for (int i = 0; i < tam; ++i) {
             *(vet+i) = rand() % 100; //coloca numeros aleatorios dentro do vetor
         }
         for (int i = 0; i < tam; ++i) {
             printf("%d ", *(vet+i));
         }
         printf("\n");
     }
     else{
         printf("Erro!");
     }

    return 0;
 }
