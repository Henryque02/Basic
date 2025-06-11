#include<stdio.h>
#include<string.h>

typedef struct
{
    int dia, mes, ano;
}DataNascimento;


typedef struct
    {
        int idade;
        char sexo;
        char nome[100];
        DataNascimento;
    }Pessoa;
    
    /*
    struct Pessoa2
    {
        int idade;
        char sexo;
        char nome[100];
    };*/

int main(){
    Pessoa pessoa1;
    //struct Pessoa2 pessoa2;

    /*
    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome, "Maria");   
    */
   printf("Digite seu nome: ");
   fgets(pessoa1.nome, 100, stdin);
   printf("Digite sua idade: ");
   scanf(" %d",&pessoa1.idade);
   printf("Digite seu sexo: ");
   scanf(" %c",&pessoa1.sexo);
   printf("Digite sua data de nascimento: ");
   scanf("  %d %d %d",&pessoa1.dia,&pessoa1.mes, &pessoa1.ano);
   printf("\n\nNome: %sIdade: %d\nSexo: %c\nData de Nascimento: %02d/%02d/%d", pessoa1.nome, pessoa1.idade, pessoa1.sexo, pessoa1.dia, pessoa1.mes, pessoa1.ano);

    return 0;
}