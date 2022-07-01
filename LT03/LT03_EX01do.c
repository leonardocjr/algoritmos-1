/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 26/04/2022
Enunciado.: LT03_EX01do: Faça um programa em Linguagem C que apresente os valores de 1 a 10.



ENTRADA
- val

PROCESSSAMENTO
- val++

SAÍDA
-

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int val=1;
    
    // PROCESSSAMENTO DE DADOS
    do{
        printf("%d - ", val);
        val++;
    }while(val<=10);
    
    // SAÍDA DE DADOS
    return 0;
}
