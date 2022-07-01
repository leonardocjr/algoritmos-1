/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 11/05/2022
Enunciado.: LT06_EX08: Escreva um programa em Linguagem C que simule a venda de ingressos 
para uma sessão de cinema, sabe-se que o cinema possui 150 poltronas, dispostas 
em 15 filas de 10 poltronas cada. Representado da seguinte maneira:

0 - poltrona vazia
1 - pagante inteira
2 - pagante meia

O preenchimento é aleatório (pode usar a função rand() ). Apresente 

a) Ocupação das poltronas; 
b) Quantidade de cada tipo; 
c) Valor apurado na sessão, sabendo que o ingresso custa R$ 12,00 (inteira).




*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define LIN 15
#define COL 10

int main(void)
{
    // ENTRADA DE DADOS
    int array[LIN][COL],vet[COL],i=0,j=0,ocupada=0,inteira=0,meia=0,vazia=0,val=0;
    for (j=0;j<LIN;j++){
        for(i=0;i<COL;i++){
                array[j][i]=rand() % 3;
                if(array[j][i]==1 || array[j][i]==2){ocupada++;}
                
                if(array[j][i]==0){ vazia++; }
                else if(array[j][i]==1){ inteira++; }
                else if(array[j][i]==2){ meia++; }
                
        }
    }
    // PROCESSSAMENTO DE DADOS
    val=(inteira*12)+(meia*6);
    
    // SAÍDA DE DADOS
    printf("Dados processados...\n");
    printf("Nessa sessão há %d cadeiras ocupadas.\n", ocupada);
    printf("%d cadeiras vazias.\n%d ingressos inteira.\n%d ingressos meia.", vazia, inteira, meia);
    printf("\n\nForam arrecadados R$%d", val);
    
    
    
    /* printf("\nMatriz:\n");
    for (j=0;j<LIN;j++){
        soma=0;
        for(i=0;i<COL;i++){
            
            printf("| %2.d |", array[j][i]);

    }
        
    } */

    return 0;
}
