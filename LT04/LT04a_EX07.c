/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX07: Faça um programa em Linguagem C que peça um número inicial 
e um número final. Em seguida, deve ser apresentada a contagem do número inicial ao número final. 
Se o número inicial for menor que o final, então a contagem será em ordem crescente. 
Do contrário, a contagem deverá ser em ordem decrescente.
Portanto, se o usuário digitar primeiro 2, depois 5, deverá ser apresentado: 2, 3, 4 e 5.
Mas se o usuário digitar primeiro 5, depois 2, deverá ser apresentado: 5, 4, 3, 2 e 1.



ENTRADA
- cont
- val1, val2

PROCESSSAMENTO
- while (<val)

SAÍDA
- bem vindo, até fim do while

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int val1=0,val2=0;
     printf("Digite o número inicial: ");
     scanf("%d", &val1);
     printf("\nDigite o número final: ");
     scanf("%d", &val2);
    
    
    // PROCESSSAMENTO DE DADOS
   if(val1>val2){
        while(val1>=val2){
            printf("%d - ", val1);
            val1--;
        }
        printf("%d - ", val1);
   }else{
        while(val1<=val2){
            printf("%d - ", val1);
            val1++;
        }
   };

    
    // SAÍDA DE DADOS
    return 0;
}
