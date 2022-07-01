/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX07: Faça um programa em Linguagem C que permita ao usuário 
entrar com um array MULTIdimensional (matriz) 3 x 3 de números inteiros. 
Crie também um array UNIdimensional (vetor) pela armazenar a soma dos números de cada coluna da matriz. 
Mostre na tela esse array resultante. Por exemplo, a matriz:
5     -8   10
1      2   15
25  10     7



*/

#include <stdio.h>
#define LIN 3
#define COL 3

int main()
{
    // ENTRADA DE DADOS
    int array[LIN][COL],vet[COL],i=0,j=0,soma=0;
    for (j=0;j<LIN;j++){
        for(i=0;i<COL;i++){
            printf("[%d][%d] Digite um número inteiro para essa posição: ", j,i);
            scanf("%d", &array[j][i]);
        }
    }
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    printf("\nMatriz:\n");
    for (j=0;j<LIN;j++){
        soma=0;
        for(i=0;i<COL;i++){
            
            printf("| %2.d |", array[j][i]);
            soma+=array[i][j];
            }
        vet[j]=soma;
        printf("\n");

    }
    printf("Vetor:\n");    
    for(i=0;i<COL;i++){
        
        printf("%d | ", vet[i]);
    }

    return 0;
}
