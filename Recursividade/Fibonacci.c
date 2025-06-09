#include<stdio.h>

int fibonacci(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);

}
int main()
{
    int enesimo_termo_da_sequencia;
    printf("Digite um valor maior que zero: ");
    scanf(" %d", &enesimo_termo_da_sequencia);
    printf("O %d termo da sequencia de Fibonacci e: %d", enesimo_termo_da_sequencia, fibonacci(enesimo_termo_da_sequencia));

    return 0;
}