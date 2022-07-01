/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 19/05/2022
Enunciado.: LT07_EX08: Faça um programa em Linguagem C que receba 3 nomes completos 
(até 30 caracteres) e imprima-os em ordem crescente.




*/

#include <stdio.h>
#include <string.h>
int main()
{
    // ENTRADA DE DADOS
    int i=0,j=0,val1,maior=0,menor=0;
    char nome1[30],nome2[30],nome3[30];
    
    printf("Digite o nome do primeiro candidato: ");
    fgets(nome1, 30, stdin);
    printf("Digite o nome do segundo candidato: ");
    fgets(nome2, 30, stdin);
    printf("Digite o nome do segundo candidato: ");
    fgets(nome3, 30, stdin);
    
    // PROCESSSAMENTO DE DADOS
    val1=strcmp(nome1,nome3); //se for <0 1>2, se for >0 1<2
    if(strcmp(nome1,nome2)<0){
        if(strcmp(nome2,nome3)<0){printf("\nA ordem é \n%s%s%s",nome1,nome2,nome3);}
        else if(strcmp(nome1,nome3)>0){printf("\nA ordem é \n%s%s%s",nome3,nome1,nome2);}
        else if(strcmp(nome2,nome3)>0){printf("\nA ordem é \n%s%s%s",nome1,nome3,nome2);}
    }
        if(strcmp(nome1,nome2)>0){
        if(strcmp(nome2,nome3)>0){printf("\nA ordem é \n%s%s%s",nome3,nome2,nome1);}
        else if(strcmp(nome1,nome3)>0){printf("\nA ordem é \n%s%s%s",nome2,nome3,nome1);}
        else if(strcmp(nome1,nome3)<0){printf("\nA ordem é \n%s%s%s",nome2,nome1,nome3);}
    }

   
 
    
    // SAÍDA DE DADOS
    return 0;
}
