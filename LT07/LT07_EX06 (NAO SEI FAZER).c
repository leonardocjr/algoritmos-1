/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 19/05/2022
Enunciado.: LT07_EX06: Faça um programa em Linguagem C receba uma string e 
um caractere, e apague todas as ocorrências desse caractere na string.


*/

#include <stdio.h>
#include <string.h>
int main()
{
    // ENTRADA DE DADOS
    int i=0,j=0;
    char string[50],caractere;
    
    printf("Digite duas palavras: ");
    fgets(string, 50, stdin);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<50;i++){
        if(string[i]==caractere){
            printf("%c", string[i]);
            string[i]=string[i++];
            
        }
    }
    
    puts(string);
    // SAÍDA DE DADOS
    return 0;
}
