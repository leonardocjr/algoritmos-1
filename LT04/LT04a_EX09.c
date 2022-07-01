/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX09: Faça um programa em Linguagem C que peça 5 valores inteiros e positivos 
(suponha que o usuário será legal e sempre digitará valores positivos). 
No fim, deve ser apresentado o número de maior valor digitado.



ENTRADA
- cont
- val

PROCESSSAMENTO
- while (cont<=7)

SAÍDA
- idade somada /3 
- numero dos pesados (>90)

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=1,val=0,maior=0;
    
    // PROCESSSAMENTO DE DADOS

        while(cont<=5){
            printf("Digite o valor %d: ", cont);
            scanf("%d", &val);
            printf("-------------------------------------\n");
            if(val>=maior){maior=val;}
            cont++;
        }
        printf("O maior valor dito foi %d", maior);
    
    // SAÍDA DE DADOS
    return 0;
}
