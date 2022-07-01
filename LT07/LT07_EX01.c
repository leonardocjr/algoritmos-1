/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: xx/xx/2022
Enunciado.: LT07_EX01 Faça um programa em Linguagem C que receba o nome completo 
do usuário e apresente-o com uma mensagem de boas vindas.

*/

#include <stdio.h>
#include <string.h>

int main()
{
    // ENTRADA DE DADOS
    char nome[50];
    printf("Digite seu nome amigo: ");
    scanf("%s", nome);
    
    // PROCESSSAMENTO DE DADOS
    printf("\nBem-vindo %s.", nome);
    
    // SAÍDA DE DADOS
    return 0;
}
