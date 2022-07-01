/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX06: Para cada um de 10 números fornecidos pelo usuário 
informar se este nº é par, ímpar, positivo ou negativo.



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
    int cont=10,val=0;

    
    
    // PROCESSSAMENTO DE DADOS
    printf("Começando o programa...\n"); 
    
    while(cont>0){
      printf("\nDigite um número (1/%d): ", cont);
      scanf("%d", &val);
      if(val%2>0){
          printf("%d é um número ímpar e positivo.", val);
      }else if(val%2<0){
          printf("%d é um número ímpar e negativo.", val);
      }else if(val%2==0 && val>=0){
          printf("%d é um número par e positivo.", val);
      }else{
          printf("%d é um número par e negativo.", val);
      }
      cont--;
    };
    
    // SAÍDA DE DADOS
    return 0;
}
