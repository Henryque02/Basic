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
        DataNascimento data;
    }Pessoa;
    
    /*
    struct Pessoa2
    {
        int idade;
        char sexo;
        char nome[100];
    };*/

    void imprimirPessoa(Pessoa p)
    {
        printf("\n\tNome: %s\n\tIdade: %d\n\tSexo: %c\n\tData de nascimento: %d/%d/%d\n\n", p.nome,p.idade,p.sexo,p.data.dia,p.data.mes,p.data.ano);
    }

    Pessoa LerDados()
    {
        Pessoa p;
        printf("\nDigite seu nome: ");
        fgets(p.nome, 100, stdin);
        printf("Digite sua idade: ");
        scanf(" %d",&p.idade);
        printf("Digite seu sexo: ");
        scanf(" %c",&p.sexo);
        printf("Digite sua data de nascimento: ");
        scanf("  %d %d %d",&p.data.dia,&p.data.mes, &p.data.ano);
        scanf("%c");
        
        return p;
    }

int main(){
    // Pessoa pessoa1;
    //struct Pessoa2 pessoa2;

    /*
    pessoa1.idade = 35;
    pessoa1.sexo = 'f';
    strcpy(pessoa1.nome, "Maria");   
    */
   int i =0;
   Pessoa pessoas[2];

   for (i = 0; i < 2; i++)
   {
    pessoas[i] = LerDados();
   }
   
   for (i = 0; i < 2; i++)
   {
    imprimirPessoa(pessoas[i]);
   }

    return 0;
}