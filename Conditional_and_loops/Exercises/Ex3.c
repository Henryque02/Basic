/* 3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

#include<stdio.h>

int main(){
    int i, resultado = 0;
    for (i = 1; i < 1001; i+=2)
    {
        resultado += i;
    }
    
    printf("A soma dos numeros impares entre 1 e 1000 e igual a %d", resultado);
    return 0;
}