/*
Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo.
 */

#include <stdio.h>

int main(){

    int a, *b, **c, ***d;

    a = 2;
    b = &a;
    c = &b;   // um aponta para o outro!!!!
    d = &c;

    printf("O dobro de %d é: %d\n", a, 2 * *b);
    printf("O triplo de %d é: %d\n", a, 3 * **c);
    printf("O quadruplo de %d é: %d\n", a, 4 * ***d);

    return 0;
}
