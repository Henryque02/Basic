#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2;
    printf("Digite dois valores inteiros: ");
    scanf(" %d %d", &num1, &num2); // dar espaço para evitar erro no buffer do teclado
    printf("Valores lidos: %d, %d\n", num1, num2);

    printf("Soma: %d\n", num1+num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1*num2);
    printf("Divisao: %f\n", (float)num1/num2); // casting
    printf("Resto da divisao: %d\n", num1%num2); // rest

    // increment and decrement

    int count = 10, contador = 11;
    printf("Valor do count: %d\n", ++count); //count +=1 ou contador = contador +1
    printf("Valor de contador: %d\n", --contador); //count -=1 ou contador = contador -1

    return 0;
}