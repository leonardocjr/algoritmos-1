/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 30/03/2022
Enunciado.: LT01_EX04: Faça um algoritmo que peça uma temperatura 
em graus célsius e apresente seu respectivo valor em fahrenheit. O cálculo de conversão é: F = (9 * C / 5) + 32.

ENTRADA
- tempC
- tempF
- int
- %d

PROCESSSAMENTO
- calculo -> F = (9 * C / 5) + 32.

SAÍDA
- temperatura em fahrenheit

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int tempC=0,tempF=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira a temperatura da sua cidade em C°:\n");
    scanf("%d", &tempC);
    tempF=(9*tempC/5)+32;
    
    // SAÍDA DE DADOS
    printf("A temperatura em fahrenheit é de %dF°.", tempF);
    return 0;
}
