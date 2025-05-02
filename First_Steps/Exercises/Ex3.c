/*3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
variável auxiliar.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int a = 0, b = 0;
    printf("DIgite um valor para a e um valor para b: ");
    scanf(" %d %d", &a, &b);
    printf("Antes da troca valor de a e %d e o valor de b e %d\n", a, b);
    printf("Depois da troca valor de a e %d e o valor de b e %d\n", b, a);

    return 0;
}