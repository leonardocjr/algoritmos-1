/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 05/04/2022
Enunciado.: LT03_EX03: Faça um programa em linguagem C que informe se um número é PAR.

ENTRADA
- var
- int
- %d

PROCESSSAMENTO
- pegar o número selecionado
- comparar

SAÍDA
- resultado do if

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int val=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Digite o número que deseja comparar:\n");
    scanf("%d", &val);
    
    // SAÍDA DE DADOS
    if(val%2 == 0){
    printf("Olha só, esse número é divisível por dois, ele é par!");
    }else{
       printf("Esse número é ímpar amigo..."); 
    };
    return 0;
}
