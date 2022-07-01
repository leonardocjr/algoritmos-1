/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 31/05/2022
Enunciado.: LT08_EX02: Faça um programa em Linguagem C que escreva uma função 
para calcular a média aritmética de 3 valores. A função deve receber os valores 
como parâmetro, calcular e apresentar o resultado na tela.



ENTRADA
-

PROCESSSAMENTO
-

SAÍDA
-

*/

#include <stdio.h>
#include<stdlib.h>
float media(float a, float b, float c){
    float mediac;
    mediac=(a+b+c)/3;
    return (mediac);
}

int main()
{
    // ENTRADA DE DADOS
    float x[3];
    int i;
    for(i=0;i<3;i++){
    printf("Digite %dº número: ", i+1);
    scanf("%f", &x[i]);}
    
    printf("Média: %.2f", media(x[0],x[1],x[2]));
    
    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    return 0;
}
