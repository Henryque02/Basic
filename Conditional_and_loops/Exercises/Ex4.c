/*Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
 dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.*/

#include<stdio.h>

int main(){
    int valor_inicial = 1, valor_final = 1;
    for (int i = 1; i < 30; i++)
    {
        valor_inicial = valor_inicial*2;
        valor_final += valor_inicial;
    }
    printf("O valor final em centavos foi %d", valor_final);

    return 0;
}