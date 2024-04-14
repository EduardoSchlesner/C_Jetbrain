/*
 * Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);
 */

#include <stdio.h>

void troca(float *a, float *b){
    float aux = *a;
    *a = *b;
    *b = aux;
}

int main(){

    float val1 = 23, val2 = 74;

    printf("Num1 = %.2f\tNum2 = %.2f\n", val1,val2);

    troca(&val1, &val2);

    printf("Num1 = %.2f\tNum2 = %.2f\n", val1,val2);

    return 0;
}
