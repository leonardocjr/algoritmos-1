/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX01: Faça um programa em Linguagem C que apresente os valores de 1 a 10.



ENTRADA
- cont

PROCESSSAMENTO
- while 

SAÍDA
- (exibir numero e somar 1 até chegar ao 10)

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=1;
    
    // PROCESSSAMENTO DE DADOS
    printf("Começando a contagem...\n"); 
    
    while(cont<=10){
      printf("| %d ", cont);
      cont++;
    };
    
    // SAÍDA DE DADOS
    return 0;
}
