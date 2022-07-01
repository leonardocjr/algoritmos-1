/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 30/03/2022
Enunciado.: LT01_EX07: Elabore um algoritmo que calcule e apresente o valor do 
salário família de um funcionário, que é de 2% do salário por dependente. 
O salário e o número de dependentes serão lidos do usuário.

ENTRADA
- salarioInicial
- depend
- salarioFinal
- int
- %d

PROCESSSAMENTO
- calculo -> salarioInicial+((salarioInicial*2%)*depend)

SAÍDA
- salarioFinal

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int depend=0;
    float salarioInicial=0,salarioFinal=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Digite seu salário base:\n");
    scanf("%f", &salarioInicial);
        printf("Digite agora quantas pessoas dependem de seu salário:\n");
    scanf("%d", &depend);
    salarioFinal=salarioInicial+((salarioInicial*0.02)*depend);
    
    // SAÍDA DE DADOS
    printf("Seu salário final é R$%.2f.", salarioFinal);
    return 0;
}
