/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 29/03/2022
Enunciado.: LT01_EX01: Faça um algoritmo que peça a idade do usuário e, 
em seguida, digite a mensagem: “Legal! Você tem *idade* anos!”.

ENTRADA
- idade
- int
- %d

PROCESSSAMENTO
- processar a idade recebido

SAÍDA
- a idade do usuário

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int idade=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira a sua idade:\n");
    scanf("%d", &idade);
    
    // SAÍDA DE DADOS
    printf("Você tem %d anos.", idade);
    return 0;
}
