/*4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
Assuma que a conta será dividida igualmente.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float valor_da_conta = 0, valor_gorjeta = 0, valor_total_por_pessoa = 0;
    int quantidade_de_pessoas = 0;
    printf("Digite as seguintes informacoes:\n1- Valor da conta\n2- A %% de gorjeta do garcon\n3- A quantidade de pessoas que vao dividir a conta\n");
    scanf(" %f %f %d", &valor_da_conta, &valor_gorjeta, &quantidade_de_pessoas);
    valor_total_por_pessoa = ((valor_da_conta*(valor_gorjeta/100)) + valor_da_conta)/quantidade_de_pessoas;
    printf("O valor que vada pessoa deve pagar e R$%.2f sem os %.2f%% e com os %.2f%% seria R$%.2f", valor_da_conta/quantidade_de_pessoas, valor_gorjeta, valor_gorjeta, valor_total_por_pessoa);
    return 0;
}