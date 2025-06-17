#include<stdio.h>

int main()
{
    int base, i;
    printf("Digite o tamanho da base: ");
    scanf("%d", &base);

    for (i = 1; i < base+1; i++)
    {
        printf("*");
    }
    for (i = base; i > 0; i--)
    {
        printf("\n");
    }
    
    
    return 0;
}