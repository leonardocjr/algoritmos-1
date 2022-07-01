/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 30/03/2022
Enunciado.: LT01_EX06: Elabore um algoritmo que leia o raio 
de uma circunferência, calcule e apresente sua área.

ENTRADA
- raio
- areaCirc
- int
- %d

PROCESSSAMENTO
- calculo -> (pi*raio)²

SAÍDA
- area da circunferencia

*/

#include <stdio.h>
#include <conio.h>
#define PI 3.1415926535898

int main()
{
    // ENTRADA DE DADOS
    int raio=0,pi=0;
    float result=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira o raio da circunferência em metros:\n");
    scanf("%d", &raio);
    result=PI*(raio*raio);
    
    // SAÍDA DE DADOS
    printf("A área da circunferência é %.2f m².", result);
    return 0;
}
