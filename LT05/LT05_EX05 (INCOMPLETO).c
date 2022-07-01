/*
INCOMPLETO
Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/05/2022
Enunciado.: LT05_EX05: Faça um programa em Linguagem C que peça 5 números reais. 
Depois, o programa deve apresentar a média. Por último, o programa deve procurar 
qual número digitado é o mais próximo da média e apresentá-lo na tela.



ENTRADA
- Receber 5 numeros reais
- int %d vetor

PROCESSSAMENTO
- for 5x receber numero

SAÍDA
- media dos numeros e mais proximo

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int i=0,numero[5],media=0,total=0,prox=0,select=0;
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<5;i++){
        printf("%d. Digite um número: ", i+1);
        scanf("%d", &numero[i]);
        total+=numero[i];
    }
    media=total/5;
    prox=media;
    
    for(i=0;i<5;i++){
        
        if(media/numero[i]<=1){
            prox=media%numero[i];
            select=numero[i];
        }  
    }
    
    // SAÍDA DE DADOS
    printf("\nA média é %d.", media);
    printf("\nO número mais próximo da média é %d", select);
}
