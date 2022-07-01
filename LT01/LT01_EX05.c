/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 30/03/2022
Enunciado.: LT01_EX05: Faça um algoritmo que peça uma temperatura em 
graus fahrenheit e apresente seu respectivo valor em celsius.

ENTRADA
- tempC
- tempF
- int
- %d

PROCESSSAMENTO
- calculo -> (F+32)*5/9 = C

SAÍDA
- temperatura em fahrenheit

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int tempC=0,tempF=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Insira a temperatura da sua cidade em F°:\n");
    scanf("%d", &tempF);
    tempC=((tempF-32)*5)/9;
    
    // SAÍDA DE DADOS
    printf("A temperatura em celcius é de %d C°.", tempC);
    return 0;
}
