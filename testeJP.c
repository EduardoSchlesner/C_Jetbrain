#include <stdio.h>
#include <stdlib.h>

int* verificador(int* v1, int* v2){
    int tamanhoVet = 10;
    int* vet = (int*)malloc(tamanhoVet*sizeof(int));

    for(int i=0;i<tamanhoVet;i++){
            if(v1[i] == v2[i]){
                vet[i] = 1;
            }
            else{
                vet[i] = 0;
            }
    }
    return vet;
}

int main(){
    int v1[10] = {1,2,3,4,5,6,7,8,9,10};
    int v2[10] = {1,2,3,6,5,4,7,8,9,10};
    int* vet = verificador(v1,v2);

    for(int i=0;i<10;i++){
        printf("%d ", vet[i]);
    }

    free(vet);
    return 0;
}