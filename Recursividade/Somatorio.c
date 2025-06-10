#include<stdio.h>

int somatorio(int n)
{
    if (n == 1)
    {
        return 1;
    }
    
    return n+somatorio(n-1);
}
int main()
{
    int numero;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &numero);
    
    printf("A soma dos numeros de 1 ate %d e igual a %d", numero, somatorio(numero));
    
    
    return 0;
}