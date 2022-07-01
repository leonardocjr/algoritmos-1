/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 09/04/2022
Enunciado.: LT03_EX13: Em uma indústria de parafusos, um algoritmo determina 
se a produção está boa ou ruim. Uma produção é ruim quando o número de parafusos 
com defeito for maior do que 10% do total produzido. Faça um programa em linguagem C 
que peça o número total de parafusos produzidos e, em seguida, peça o número de parafusos com defeito. 
O programa, então, deve calcular o limite de peças com defeito permitidas (com base no total de 
peças produzidas e a porcentagem limite) e apresentar se a produção está boa ou ruim.



ENTRADA
- int &d
- prod
- def

PROCESSSAMENTO
se>idade{mensagem}

SAÍDA
- result

*/

#include <stdio.h>
#include<conio.h>

int main()
{
    // ENTRADA DE DADOS
    int prod=0,def=0;
    printf("Digite o total de peças produzidas: ");
    scanf("%d", &prod);
    printf("Digite o total de peças com defeito: ");
    scanf("%d", &def);
    // PROCESSSAMENTO DE DADOS
    if(def>(prod*0.1)){
        printf("A produção está ruim, mais de 10 porcento das peças estão com defeito.");
    }else{
        printf("A produção está boa, não ultrapassaram os 10 porcento de peças com defeito.");
    };
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
