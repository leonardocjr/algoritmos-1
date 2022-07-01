/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 29/03/2022
Enunciado.: LT01_EX03: Faça um algoritmo que peça a idade do usuário 
e apresente seu provável ano de nascimento.

ENTRADA
- idade
- anoAtual
- int
- %d

PROCESSSAMENTO
- calculo -> anoAtual-idade

SAÍDA
- ano de nascimento

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int idade=0,anoAtual=2022;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira a sua idade:\n");
    scanf("%d", &idade);
    
    // SAÍDA DE DADOS
    printf("Você provavelmente nasceu em %d.", anoAtual-idade);
    return 0;
}
