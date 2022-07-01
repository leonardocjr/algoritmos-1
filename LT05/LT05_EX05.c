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
#include<math.h>
#include<stdlib.h>

int main()
{
    // ENTRADA DE DADOS
    int i=0, media=0,numero[5],total=0,maisProximo=0,resto=0, compair=0;
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<5;i++){
        printf("%d. Digite um número: ", i+1);
        scanf("%d", &numero[i]);
        total+=numero[i];
    }
    
    media=total/5;
    
    for(i=0;i<5;i++){
    resto=abs(numero[i]-media);
    
    if(i==0){
    compair=resto;
    maisProximo=numero[0];
    }
    
    if(resto<compair){
    compair=resto;
    maisProximo=numero[i];
    }
    }
    
    // SAÍDA DE DADOS
    
    printf("\nA média é %d.", media);
    printf("\nO número mais próximo da média é %d", maisProximo);
}
