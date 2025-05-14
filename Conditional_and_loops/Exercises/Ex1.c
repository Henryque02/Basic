/* 1) Elabore um programa em C para ler do teclado um valor inteiro entre 1 e 10 e apresentar a 
tabuada. Exemplo:
 Entrada 7
 Saída:
 7 * 1 = 7
 7 * 2 = 14
 7 * 3 = 21
 7 * 4 = 28
 7 * 5 = 35
 7 * 6 = 42
 7 * 7 = 49
 7 * 8 = 56
 7 * 9 = 63
 7 * 10 = 70*/

#include<stdio.h>

int main(){
    int numero, resultado;
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);
    while (1>numero || numero>10)
    {
        printf("Insira um numero válido: ");
        scanf("%d", &numero);
    }
    for (int i = 0; i < 11; i++)
    {
        resultado = numero*i;
        printf("%d * %d = %d\n", numero, i, resultado);
    }
    
    return 0;
}
