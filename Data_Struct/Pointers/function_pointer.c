#include<stdio.h>

void imprimir(int *p)
{
    printf("%d\n", *p);
    *p = 80; 
}

int main()
{
    int idade = 35;

    imprimir(&idade);
    printf("No main: %d\n", idade);
    return 0;
}