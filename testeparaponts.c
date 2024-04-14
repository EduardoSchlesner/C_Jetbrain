#include <stdio.h>

void mudando(int **duplo){
    **duplo = 35;
}

void testando(int *ponteiro){
    *ponteiro = 10;
    mudando(&ponteiro);
}

int main(){

    int num = 15;

    printf("%d", num);

    testando(&num);

    printf("\n%d", num);


    return 0;
}