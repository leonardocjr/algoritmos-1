/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: xx/xx/2022
Enunciado.: LT07_EX02: Faça um programa em Linguagem C que receba uma string e 
depois um caractere, e retorne o número de vezes que esse caractere aparece na string.


*/

#include <stdio.h>
#include <string.h>

int main()
{
    // ENTRADA DE DADOS
    char string[50], caract;
    int i=0,count=0;
    printf("Digite o que quiser: ");
    fgets(string, 50, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caract);
    
    // PROCESSSAMENTO DE DADOS
    printf("Processando...\n");
    for(i=0;i<50;i++){
        if(string[i]==caract){
            count++;
        }
    }
    
    // SAÍDA DE DADOS
    if(count==0){
        printf("Esse caractere não apareceu na string.");
    }else{
        printf("Esse caractere apareceu %d vezes.", count);
    }
    
    return 0;
}
