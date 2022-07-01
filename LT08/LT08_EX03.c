/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 31/05/2022
Enunciado.: LT08_EX03: Faça um programa em Linguagem C para obter do usuário 
uma temperatura em graus Fahrenheit e retornar o valor correspondente em graus Celsius. 
O cálculo deve ser realizado por uma função que vai receber por parâmetro o valor em Fahrenheit e vai retornar o valor em Celsius.
Fórmula para conversão: C = ((F - 32) / 9) * 5




ENTRADA
-

PROCESSSAMENTO
-

SAÍDA
-

*/

#include <stdio.h>
#include<stdlib.h>
int conversao(int a){
    int graus;
    graus=((a - 32) / 9) * 5;
    return(graus);
}

int main()
{
    // ENTRADA DE DADOS
    int F;
    printf("Digite a temperatura em F°: ");
    scanf("%d", &F);
    printf("O valor em C°: %d graus.", conversao(F));
    
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    return 0;
}
