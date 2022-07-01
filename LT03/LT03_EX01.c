/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 05/04/2022
Enunciado.: LT03_EX01: Faça um programa em linguagem C que leia 
uma valor do usuário e diga se ele é um valor igual a zero. 

ENTRADA
- val
- int
- %d

PROCESSSAMENTO
- processar número recebido, verdadeiro ou falso

SAÍDA
- resultado

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int val=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira um número aleatório:\n");
    scanf("%d", &val);
    
    // SAÍDA DE DADOS
    if(val==0){
    printf("Você digitou um número igual a zero.");
    }else{
       printf("Você digitou o número %d. \nNão é zero...", val); 
    };
    return 0;
}
