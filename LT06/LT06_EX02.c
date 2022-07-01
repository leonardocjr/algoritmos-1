/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX02: Faça um programa em Linguagem C que crie uma matriz de 3x2, de números inteiros. 
Populacione-a usando laço PARA (FOR) e, por fim, apresente todos os valores, mas de forma invertida 
( o que é linha passa aparecer como coluna e assim por diante).


*/

#include <stdio.h>
#define LIN 3
#define COL 2

int main()
{
    // ENTRADA DE DADOS
    int array[LIN][COL],i=0,j=0;
    for (j=0;j<3;j++){
        for(i=0;i<2;i++){
            printf("[%d][%d] Digite um número inteiro para essa posição: ", j,i);
            scanf("%d", &array[j][i]);
        }
    }
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    for (j=0;j<3;j++){
    for(i=0;i<2;i++){
            printf("| %d |", array[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    for (j=0;j<2;j++){
    for(i=0;i<3;i++){
            printf("| %d |", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
