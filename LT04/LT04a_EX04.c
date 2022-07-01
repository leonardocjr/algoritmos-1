/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX04: Faça um programa em Linguagem C que receba um número do 
usuário e apresente a fase "Seja bem vindo", tantas vezes quanto for esse número. 
Uma frase por linha.



ENTRADA
- cont

PROCESSSAMENTO
- while (cont<val)

SAÍDA
- bem vindo, até fim do while

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=0,val=0;
    printf("Digite quantos membros precisam ser recebidos: ");
    scanf("%d", &val);
    
    // PROCESSSAMENTO DE DADOS
    printf("Começando o programa...\n"); 
    
    while(cont<val){
      printf("Seja bem-vindo!\n");
      cont++;
    };
    
    // SAÍDA DE DADOS
    return 0;
}
