#include<stdio.h>

int fatorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1 ;
    }
    
    return num*fatorial(num-1);
}
int main()
{
    int numero;
    printf("Digite um numero inteiro e sera calculado seu fatorial (!): ");
    scanf("%d", &numero);
    printf("O fatorial de %d e: %d", numero, fatorial(numero));

    return 0;
}