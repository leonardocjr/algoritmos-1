/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/05/2022
Enunciado.: LT05_EX01: Faça um programa em Linguagem C que peça 5 números reais ao usuário. 
Armazene esses números em um vetor. Depois, o programa deve apresentar o número maior.



ENTRADA
- Receber 5 numeros reais
- int %d vetor

PROCESSSAMENTO
- for 5x receber numero

SAÍDA
- maior numero recebido

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int numero[5],i=0,maior=0,compair=0;
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<5;i++){
        printf("%d. Digite um número aleatório: ", i);
        scanf("%d", &numero[i]);
        if(maior<numero[i]){ maior=numero[i]; }
    }
    
    // SAÍDA DE DADOS
    printf("\nMaior número dito foi %d.", maior);
    return 0;
}
