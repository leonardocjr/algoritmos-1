/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 05/04/2022
Enunciado.: LT03_EX06: Você está jogando um bingo e só faltam 
as "pedras" 21 e 53. Faça um programa em linguagem C que receba 
2 valores "cantados" do usuário, se os valores "cantados" forem os seus, diga BINGO!!! 
Ao final, ganhando ou não, de uma mensagem de fim da rodada.


ENTRADA
- pedra1
- pedra2
- char
- %c

PROCESSSAMENTO
- comparar qual valor matematico inserido, e dependendo realizar o cálculo

SAÍDA
- resultado da comparação e da realização matemática

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int pedra1=0,pedra2=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("[Bingo] Faltam apenas dois números, essa é a hora!\nDigite o primeiro número: ");
    scanf("%d", &pedra1);
    printf("Ok.\n");
    printf("Digite o segundo número: ");
    scanf("%d", &pedra2);
    printf("Analisando...\n");
    
    if(pedra1 == 21 && pedra2 == 53 || pedra1 == 53 && pedra2 == 21){
        printf("Parabéns, você venceu!!!");
    }else if(pedra1 == 21 || pedra2 == 53 || pedra1 == 53 || pedra2 == 21){
        printf("Você acertou apenas um número, tente na próxima vez!");
    }else{
        printf("Errou! Todos números, tente outra vez.");
    }
    
    // SAÍDA DE DADOS
    printf("\nFim da rodade!");
    return 0;
}
