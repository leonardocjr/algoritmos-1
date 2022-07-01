/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX04: Faça um programa em Linguagem C que crie 
três matrizes de 3 x 3 de inteiros: mat1, mat2 e mult. 
Em seguida, peça para o usuário digitar os valores para mat1 e mat2. 
Em seguida, o algoritmo deverá preencher a matriz mult com a multiplicação das respectivas posições das matrizes anteriores.


*/

#include <stdio.h>
#define LIN 3
#define COL 3

int main()
{
    // ENTRADA DE DADOS
    int mat1[LIN][COL],mat2[LIN][COL],mult[LIN][COL],i=0,j=0;
    for (j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("[%d][%d]  [MAT-1] Digite um número inteiro para essa posição: ", j,i);
            scanf("%d", &mat1[j][i]);
        }
    }
        for (j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("[%d][%d] [MAT-2] Digite um número inteiro para essa posição: ", j,i);
            scanf("%d", &mat2[j][i]);
        }
    }
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    printf("\nMatriz 1:\n");
    for (j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("| %d |", mat1[j][i]);
        }
        printf("\n");
    }
    printf("\nMatriz 2:\n");
    for (j=0;j<3;j++){
        for(i=0;i<3;i++){
            printf("| %d |", mat2[j][i]);
        }
        printf("\n");
    }
    printf("\nMultiplicação das matrizes:\n");
    for (j=0;j<3;j++){
        for(i=0;i<3;i++){
            
            printf("| %2.d |", mat1[j][i]*mat2[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
