/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: xx/xx/2022
Enunciado.: LT07_EX04: Faça um programa em Linguagem C que receba uma 
palavra do usuário e retire o hífen se acaso existir. Não é apenas para imprimir, precisa retirar o hífen da palavra.


*/

#include <stdio.h>
#include <string.h>

int main()
{
    // ENTRADA DE DADOS
    char palavra[20];
    int i=0,j=0,temp=0;
    printf("Insira uma palavra: ");
    fgets(palavra, 20, stdin);
    
    // PROCESSSAMENTO DE DADOS
    printf("Processando...\n");
    
    // SAÍDA DE DADOS
    for(i=0;i<20;i++){
        if(palavra[i]=='-'){
            temp=i;
            for(j=temp;j<20;j++){
                palavra[j]=palavra[j+1];
                
            }
        }
    }
    puts(palavra);
    
    
    return 0;
}
