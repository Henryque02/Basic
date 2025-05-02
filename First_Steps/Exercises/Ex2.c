/*2) Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
“a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{   
    int a = 0, b = 0, aux = 0;
    printf("DIgite um valor para a e um valor para b: ");
    scanf(" %d %d", &a, &b);
    printf("Antes da troca valor de a e %d e o valor de b e %d\n", a, b);
    aux = a;
    a = b;
    b= aux;
    printf("Depois da troca valor de a e %d e o valor de b e %d\n", a, b);
    return 0;
}