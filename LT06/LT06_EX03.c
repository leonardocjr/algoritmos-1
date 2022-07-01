/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX03: Faça um programa em Linguagem C que crie uma matriz de 2x3, 
de números inteiros e a populacione usando laço PARA (FOR). Por fim, calcule e apresente a soma de cada linha.
Por exemplo, se o usuário digitar:


*/

#include <stdio.h>
#define LIN 2
#define COL 3

int main()
{
    // ENTRADA DE DADOS
    int array[LIN][COL],i=0,j=0,soma1=0,soma2=0;
    for (j=0;j<2;j++){
        for(i=0;i<3;i++){
            printf("[%d][%d] Digite um número inteiro para essa posição: ", j,i);
            scanf("%d", &array[j][i]);
        }
    }
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    for (j=0;j<2;j++){
    for(i=0;i<3;i++){
            printf("| %d |", array[j][i]);
            if(j==0){soma1+=array[0][i];}
            if(j==1){soma2+=array[1][i];}
        }
        printf("\n");
    }
    printf("\nSoma linha 1: %d\nSoma linha 2: %d", soma1, soma2);
    
    return 0;
}
