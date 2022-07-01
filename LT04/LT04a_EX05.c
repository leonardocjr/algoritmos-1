/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX05: Faça um programa em Linguagem C que receba um número do 
usuário e apresente a tabuada desse número. Apresente os dados de forma alinhada.



ENTRADA
- cont
- val

PROCESSSAMENTO
- while (<val)

SAÍDA
- bem vindo, até fim do while

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=0,val=0;
    printf("Digite qual tabuada você deseja receber: ");
    scanf("%d", &val);
    
    // PROCESSSAMENTO DE DADOS
    printf("Começando o programa...\n"); 
    
    while(cont<=10){
      printf("%3d x %2d = %3d\n", val,cont,cont*val);
      cont++;
    };
    
    // SAÍDA DE DADOS
    return 0;
}
