/*6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
Dólares.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float valor_em_real = 0, valor_convertido = 0;
    printf("Digite o valor em Real para que seja convertido em dolar R$");
    scanf("%f", &valor_em_real);
    valor_convertido = valor_em_real/5.30;
    printf("O valor em dolar e US$%.2f", valor_convertido);
    return 0;
}