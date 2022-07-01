/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/05/2022
Enunciado.: LT05_EX04: Faça um programa em Linguagem C que peça 6 números inteiros e, 
depois, apresente-os na tela na forma invertida ao que foi digitado. 
Exemplo, se foi digitado 1 3 2 4 5 9, deve ser apresentado 9 5 4 2 3 1.



ENTRADA
- Receber 6 numeros reais
- int %d vetor

PROCESSSAMENTO
- for 5x receber numero
- for 2: dados alterados

SAÍDA
- media salaria e salarios abaixo da media

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int i=0,abaixo=0,numero[6];
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<6;i++){
        printf("%d. Digite um número: ", i+1);
        scanf("%d", &numero[i]);}
    
    printf("\nNúmeros alterados: ");
        for(i=5;i>=0;i--){
            printf("%d | ", numero[i]);
    }
    return 0;
}
