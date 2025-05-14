/* 2) Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura 
de senha incorreta informada, escrever a mensagem “Senha Invalida”. Quando a senha for 
informada corretamente deve ser impressa a mensagem “Acesso Permitido” e o programa deve ser 
encerrado. Considere que a senha correta é o valor 123456*/

#include<stdio.h>

int main(){
    int senha;
    printf("Insira a senha: ");
    scanf("%d", &senha);
    do
    {
       printf("Senha incorreta! Digite a senha correta:");
       scanf("%d", &senha);
        
    } while (senha != 123456);
    

    return 0;
}