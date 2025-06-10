#include<stdio.h>

int potencia(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x*potencia(x, n-1);
}

int main()
{
    int base, expoente;

    printf("Digite um numero inteiro para ser a base e um para ser o expoente: ");
    scanf(" %d %d", &base, &expoente);
    printf("%d elevado a %d e igual a: %d",base, expoente, potencia(base, expoente));

    return 0;
}