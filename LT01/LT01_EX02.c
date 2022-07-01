/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 29/03/2022
Enunciado.: LT01_EX02: Faça um algoritmo que peça o ano de nascimento do usuário 
e apresente sua provável idade.

ENTRADA
- ano de nascimento
- int
- %d
- anoNasc

PROCESSSAMENTO
- calculo --> anoAtual-anoNasc

SAÍDA
- a idade do usuário

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int anoNasc=0, anoAtual=2022;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira o ano você nasceu:\n");
    scanf("%d", &anoNasc);
    
    // SAÍDA DE DADOS
    printf("Você tem %d anos.", anoAtual-anoNasc);
    return 0;
}
