/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 19/05/2022
Enunciado.: LT07_EX05: Faça um programa em Linguagem C que receba o nome 
completo do usuário e troque o último sobrenome por “XPTO”. 
Não é apenas para imprimir, precisa substituir o último sobrenome.


*/

#include <stdio.h>
#include <string.h>
int main()
{
    // ENTRADA DE DADOS
    int i=0,j=0;
    char nome[50],string[5]="XPTO";//="Leonardo Canuto Junior";
    
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin);
    
    // PROCESSSAMENTO DE DADOS
    for(i=49;i>-1;i--){
        if(!nome[i]){
            strcat(nome, string); 
            break;
        }
    }
    
    puts(nome);
    // SAÍDA DE DADOS
    return 0;
}
