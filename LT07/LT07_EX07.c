/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 19/05/2022
Enunciado.: LT07_EX07: Faça um programa em Linguagem C que receba 2 nome completos 
(até 30 caracteres) e imprima-os em ordem crescente.




*/

#include <stdio.h>
#include <string.h>
int main()
{
    // ENTRADA DE DADOS
    int i=0,j=0,val=0;
    char nome1[30],nome2[30];
    
    printf("Digite o nome do primeiro candidato: ");
    fgets(nome1, 30, stdin);
    printf("Digite o nome do segundo candidato: ");
    fgets(nome2, 30, stdin);
    
    
    // PROCESSSAMENTO DE DADOS
    val=strcmp(nome1,nome2);
    if(val<0){
        printf("\nA ordem alfabética é:\n%s%s", nome1,nome2);
    }else if(val>0){
        printf("\nA ordem alfabética é:\n%s%s", nome2,nome1);
    }else if(val==0){
        printf("\nA ordem alfabética é igual.");
    }
    
    
    // SAÍDA DE DADOS
    return 0;
}
