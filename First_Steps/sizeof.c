#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int x;
    long long int y;
    long double z;
    printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));
    printf("Tamanho em memoria de um float: %d bytes\n", sizeof(float));
    printf("Tamanho em memoria de um long int: %zu bytes\n", sizeof x);
    printf("Tamanho em memoria de um long long int: %zd bytes\n", sizeof y);
    printf("Tamanho em memoria de um long double int: %zd bytes\n", sizeof z);

    return 0;
}

/*float e int ocupam 4 bytes de memoria*/

/*
Tipos de variaveis primitivos:
int (inteiro) %d
float (real de precisão simples) %f 
double (real de precisão dupla) %lf
char (caractere) %c
short int (inteiro curto) %hi ou %d
long int (inteiro longo) %ld ou %li ocupa 4 bytes de memoria do mesmo jeito
long long int (inteiro longo longo) %lld ou %lli
long double (real de precisão longa) %Lf
unsigned int (inteiro sem sinal) %u
unsigned long int (inteiro longo sem sinal) %lu
unsigned long long int (inteiro longo longo sem sinal) %llu
unsigned short int (inteiro curto sem sinal) %hu 
%zu - Para size_t (especialmente para retornos de sizeof())
%zd - Para ssize_t (versão com sinal de size_t)

%s - Para strings (char*)
%p - Para ponteiros (endereços de memória)
*/