/* 
8) Faça um programa que calcule e 
imprima a soma de todos os elementos de uma matriz 5 x 7.
*/

#include<stdio.h>

int main(){
    int matriz[2][3] = {1,2,3,4,5,7}, soma = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int  j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int  j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
    }

    printf("\nA soma dos elementos da matriz e %d", soma);
    return 0;
}