/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX05: Faça um programa em Linguagem C que crie uma matriz 6 x 6 de valores digitados pelo usuário. 
Calcule e apresente a soma dos valores da diagonal principal da matriz.


*/

#include <stdio.h>
#define LIN 6
#define COL 6

int main()
{
    // ENTRADA DE DADOS
    int array[LIN][COL],i=0,j=0,soma=0;
    for (j=0;j<6;j++){
        for(i=0;i<6;i++){
            printf("[%d][%d] Digite um número inteiro para essa posição: ", j,i);
            scanf("%d", &array[j][i]);
        }
    }
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    printf("\nMatriz:\n");
    for (j=0;j<6;j++){
        for(i=0;i<6;i++){
            printf("| %2.d |", array[j][i]);
            if(i==j){soma+=array[i][j];}
        }
        printf("\n");
    }
    printf("\nOs valores da diagonal principal da matriz é %d", soma);
    return 0;
}
