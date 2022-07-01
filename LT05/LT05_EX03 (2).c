/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/05/2022
Enunciado.: LT05_EX03: Faça um programa em Linguagem C que peça 5 números inteiros e, 
no final, troque a ordem do primeiro número com a do último número digitado. 
Apresente os dados originais e os dados alterados na tela.



ENTRADA
- Receber 5 numeros reais
- int %d vetor

PROCESSSAMENTO
- for 5x receber numero
- for 1: dados originais
- for 2: dados alterados

SAÍDA
- media salaria e salarios abaixo da media

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int i=0,abaixo=0,numero[5];
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<5;i++){
        printf("%d. Digite um número: ", i+1);
        scanf("%d", &numero[i]);}
    
    // SAÍDA DE DADOS
    printf("\nNúmeros originais: ");
    for(i=0;i<5;i++){
        printf("%d | ", numero[i]);
    }
    
    printf("\nNúmeros alterados: %d | %d | %d | %d | %d |", numero[4],numero[1],numero[2],numero[3],numero[0]);
}
