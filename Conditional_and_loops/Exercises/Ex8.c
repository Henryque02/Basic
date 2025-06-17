/*Escreva um programa que gere a saída abaixo.

        *
       **
      ***
     ****
    *****
   ******
  *******
*********/

#include<stdio.h>

int main()
{
    int base;

    printf("Digite o tamanho da base: ");
    scanf("%d", &base);

    for (int i = 0; i < base; i++)
    {
        for (int k = 0; k < base - i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}