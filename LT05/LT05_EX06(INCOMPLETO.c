/*
INCOMPLETO
Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/05/2022
Enunciado.: LT05_EX06: Faça um programa em Linguagem C que peça 5 números inteiros. 
Após digitados, o programa deve ordenar os valores no vetor e apresentá-los na tela em ordem crescente.



ENTRADA
- Receber 5 numeros reais
- int %d vetor

PROCESSSAMENTO
- 

SAÍDA
-

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int i=0,numero[5];
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<5;i++){
        printf("%d. Digite um número: ", i+1);
        scanf("%d", &numero[i]);
    }

    // SAÍDA DE DADOS
}
