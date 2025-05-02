/*7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
conversão para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Saída: 1:1:12*/

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int segundos, minutos, horas;
    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);
    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    int segundos_restantes = segundos%60;
    printf("%d segundos equivale a %02d:%02d:%02d", segundos, horas, minutos, segundos_restantes);
    return 0;
}