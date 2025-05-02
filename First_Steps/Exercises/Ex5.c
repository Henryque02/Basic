/*5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo que são descontados 8% para imposto de renda.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int dias_trabalhados = 0;
    float salario_bruto = 0, salario_liquido = 0;
    printf("Digite o numero de dias que o encanador trabalhou: ");
    scanf("%d", &dias_trabalhados);
    salario_bruto = dias_trabalhados*45;
    salario_liquido = salario_bruto - salario_bruto*(8/100.0);
    printf("Deve ser pago R$%.2f visto que foram descontados 8%% de imposto.", salario_liquido);
    return 0;
}