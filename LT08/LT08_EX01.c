/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 31/05/2022
Enunciado.: LT08_EX01: Faça um programa em Linguagem C que escreva uma função 
para receber um número e retornar o valor absoluto deste número 
(a função sempre retorna um valor positivo).



ENTRADA
-

PROCESSSAMENTO
-

SAÍDA
-

*/

#include <stdio.h>
#include<stdlib.h>
int absoluto(float a)
{
    int absoluto;
    absoluto=abs(a);
    return (absoluto);
}

int main()
{
    // ENTRADA DE DADOS
    float var;
    printf("Digite um número não absoluto: ");
    scanf("%f", &var);
    printf("Número absoluto: %d", absoluto(var));
    
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    return 0;
}
