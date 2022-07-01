/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX06: Faça um programa em Linguagem C que leia uma matriz 4 x 4, 
imprima a matriz e retorne a localização (a linha e a coluna) do maior valor da matriz.



*/

#include <stdio.h>
#define LIN 4
#define COL 4

int main()
{
    // ENTRADA DE DADOS
    int array[LIN][COL],i=0,j=0,temp_0=0,temp_1=0,temp_2=0,maior=0;
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
        for(i=0;i<COL;i++){
            printf("| %2.d |", array[j][i]);
            temp_0=array[j][i];
            if(temp_0>temp_1){ temp_1=array[j][i]; }
            }
        
        printf("\n");
        temp_2=temp_1;
        if(temp_2>maior){ maior=temp_2; }
    }
        
        
    
    printf("\nO maior número da matriz é %d", maior);
    return 0;
}
