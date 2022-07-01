/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 26/04/2022
Enunciado.: LT03_EX02do: Faça um programa em Linguagem C que apresente os valores de 10 a 1.



ENTRADA
- val

PROCESSSAMENTO
- val--

SAÍDA
-

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int val=10;
    
    // PROCESSSAMENTO DE DADOS
    do{
        printf("%d - ", val);
        val--;
    }while(val>=1);
    
    // SAÍDA DE DADOS
    return 0;
}
