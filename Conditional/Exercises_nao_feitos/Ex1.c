// 1) Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero1, numero2, numero3, menor, maior;
    scanf(" %d %d %d", &numero1, &numero2, &numero3);
    if (numero1 > numero2)
    {
        if (numero1 > numero3)
        {
            maior = numero1;
        }
        
    }
    
    return 0;
}