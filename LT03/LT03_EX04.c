/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 05/04/2022
Enunciado.: LT03_EX04: Faça um programa em linguagem C que receba o valor do 
salário de um funcionário, se ele ganhar menos que 2 salários mínimos, 
acresça um bônus de 10% ao salário a receber.

ENTRADA
- salario
- salarioMin
- float
- %f

PROCESSSAMENTO
- comparar se o salário é maior que dois minimos
- adicionar um bonus de 10%

SAÍDA
- resultado da comparação e da multiplicação

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    float salario=0,salarioMin=1212;
    
    // PROCESSSAMENTO DE DADOS
    printf("Digite seu salário atual: ");
    scanf("%f", &salario);
    
    if(salario <= 2*salarioMin){
    salario=salario+salario*0.1;
    printf("Olha, você receberá um aumento...\n");
    }else{
       printf("Seu salário ultrapassou o limite de aumento.\n"); 
    };
    
    // SAÍDA DE DADOS
    printf("Seu salário ficou em R$%.2f.", salario);
    return 0;
}
