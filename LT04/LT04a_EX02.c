/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX02: Faça um programa em Linguagem C que apresente os valores de 10 a 1.



ENTRADA
- cont

PROCESSSAMENTO
- while 

SAÍDA
- (exibir numero e subtrair 10 até chegar ao 1)

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=10;
    
    // PROCESSSAMENTO DE DADOS
    printf("Começando a contagem...\n"); 
    
    while(cont>=1){
      printf("%d - ", cont);
      cont--;
    };
    
    // SAÍDA DE DADOS
    return 0;
}
