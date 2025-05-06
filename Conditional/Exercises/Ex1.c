// 1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    float numeros[3], maior = 0, menor = 0;
    printf("Digite 3 numeros: ");
    scanf("%f", &numeros[0]);
    maior = numeros[0];
    menor = numeros[0];

    for (i = 1; i < 3; i++)
    {
        scanf("%f", &numeros[i]);
        if (maior < numeros[i])
        {
            maior = numeros[i];
        }
        if (menor > numeros[i])
        {
            menor = numeros[i];
        }
    }
    printf("O maior numero digitado foi %.2f e o menor foi %.2f", maior, menor);
    return 0;
}