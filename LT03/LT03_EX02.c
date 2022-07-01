/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 05/04/2022
Enunciado.: LT03_EX02: Faça um programa em linguagem C que informe se 
uma determinada pessoa é maior de idade.

ENTRADA
- idade
- int
- %d

PROCESSSAMENTO
- processar a idade recebido, verdadeiro ou falso

SAÍDA
- resultado do if

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int idade=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Qual sua idade?\n");
    scanf("%d", &idade);
    
    // SAÍDA DE DADOS
    if(idade>=18){
    printf("Você é maior idade, cuidado com as atitudes amigão...");
    }else{
       printf("Você ainda é menor de idade, aproveite a boa idade :')"); 
    };
    return 0;
}
