/*
 * DESAFIOS DE PROGRAMAÇÃO EM C
 * Teste seus conhecimentos em loops e condicionais
 */

 #include <stdio.h>

 /* ========== DESAFIO 1: BÁSICO - PADRÃO DE NÚMEROS ==========
  * Objetivo: Crie um programa que imprima o seguinte padrão:
  * 1
  * 22
  * 333
  * 4444
  * 55555
  * 
  * Este desafio testa seu conhecimento em loops aninhados.
  */
 
 void desafio1() {
     printf("\n===== DESAFIO 1 =====\n");
    
     int numero, i;
     printf("Digite um numero: ");
     scanf("%d", &numero);
     for (i = 1; i < numero+1; i++)
     {
        printf("\n");
        for ( int j = 1; j < i+1; j++)
        {
            printf("%d", i);
        }
     }
 }
 
 /* ========== DESAFIO 2: NÚMEROS PRIMOS ==========
  * Objetivo: Escreva uma função que verifica se um número é primo
  * e depois use-a para listar todos os números primos até N.
  * 
  * Este desafio testa seu conhecimento em loops e condicionais.
  */
 
 int ehPrimo(int num) {
    for (int i = 2; i < num; i++)
    {
        if (num % i != 0 )
        {
            return num;
        }
    }
 }
 
 void desafio2() {
     printf("\n===== DESAFIO 2 =====\n");
     int n = 50; // Listar primos até 50
     printf("Números primos até %d:\n", n);
     for (int j = 2; j < n; j++)
     {
        ehPrimo(j);
     }
     }
 
 /* ========== DESAFIO 3: ALTERNATIVA AO SWITCH-CASE ==========
  * Objetivo: Implemente um menu de opções SEM usar switch-case.
  * Use apenas if-else para criar um menu com 4 opções:
  * 1. Somar dois números
  * 2. Multiplicar dois números
  * 3. Verificar se um número é par ou ímpar
  * 4. Sair
  * 
  * Este desafio testa seu conhecimento em estruturas condicionais aninhadas.
  */
 
 void desafio3() {
     printf("\n===== DESAFIO 3 =====\n");
     int opcao = 0;
     
     while(opcao != 4) {
         printf("\nMENU:\n");
         printf("1. Somar dois números\n");
         printf("2. Multiplicar dois números\n");
         printf("3. Verificar se um número é par ou ímpar\n");
         printf("4. Sair\n");
         printf("Escolha uma opção: ");
         scanf("%d", &opcao);
         
         // Implemente a lógica do menu aqui
     }
 }
 
 /* ========== DESAFIO 4: FIBONACCI SEM RECURSÃO ==========
  * Objetivo: Implemente a sequência de Fibonacci até o N-ésimo termo
  * usando APENAS um loop while (sem for, sem recursão).
  * 
  * Este desafio testa seu conhecimento em loops while e variáveis auxiliares.
  */
 
 void desafio4() {
     printf("\n===== DESAFIO 4 =====\n");
     int n = 10; // Calcular até o 10º termo
     printf("Sequência de Fibonacci até o %dº termo:\n", n);
     // Implemente aqui
 }
 
 /* ========== DESAFIO 5: COMBINAÇÃO DE LOOPS ==========
  * Objetivo: Implemente um programa que combine do-while e for
  * para permitir que o usuário entre com vários números.
  * O programa deve calcular a média dos números pares e a soma dos ímpares.
  * Use do-while para perguntar se o usuário quer continuar e for para processar os números.
  * 
  * Este desafio testa seu conhecimento em combinar diferentes tipos de loops.
  */
 
 void desafio5() {
     printf("\n===== DESAFIO 5 =====\n");
     // Implemente aqui
 }
 
 /* ========== DESAFIO 6: MESTRE DOS LOOPS ==========
  * Objetivo: Crie um programa que imprima um padrão de diamante usando asteriscos.
  * Exemplo para n=5:
  *    *
  *   ***
  *  *****
  * *******
  *  *****
  *   ***
  *    *
  * 
  * Este desafio testa seu conhecimento avançado em loops aninhados.
  */
 
 void desafio6() {
     printf("\n===== DESAFIO 6 =====\n");
     int n = 4; // Altura do diamante (metade)
     // Implemente aqui
 }
 
 int main() {
     printf("DESAFIOS DE PROGRAMAÇÃO EM C\n");
     printf("Implemente as soluções e teste seus conhecimentos!\n");
     
     // Descomente os desafios que você quer testar
     //desafio1(); (X)
     desafio2();
     // desafio3();
     // desafio4();
     // desafio5();
     // desafio6();
     
     return 0;
 }