/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: xx/xx/2022
Enunciado.: LT07_EX03: Faça um programa em Linguagem C que receba o 
nome de usuário e sua senha de acesso a um sistema. 
Se o usuário for “joao“ e a senha “123“, permita o acesso. Caso contrário, dê uma mensagem de ACESSO NEGADO.


*/

#include <stdio.h>
#include <string.h>

int main()
{
    // ENTRADA DE DADOS
    char login[10], senha[8], user[10]="joao",pass[8]="123";
    int r1=0,r2=0;
    printf("Digite seu login: ");
    scanf("%s", login);
    printf("Digite sua senha: ");
    scanf("%s", senha);
    
    // PROCESSSAMENTO DE DADOS
    printf("Processando...\n");
    
    // SAÍDA DE DADOS
    if(strcmp(login,user)==0 && strcmp(senha,pass)==0){
        printf("Acesso permitido.");
    }else{
        printf("Acesso NEGADO!");
    }
    
    
    return 0;
}
