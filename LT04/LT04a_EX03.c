/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX03: Faça um programa em C que imprima todos os múltiplos de 3, entre 1 e 100.



ENTRADA
- cont

PROCESSSAMENTO
- while 

SAÍDA
- (exibir numero, multiplicar cont por 3 até result > 100)

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=1,result=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Começando a contagem...\n"); 
    
    while(result<=100){
      printf("%d - ", result);
      cont++;
      result=cont*3;
    };
    
    // SAÍDA DE DADOS
    return 0;
}
