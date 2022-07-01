/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 01/04/2022
Enunciado.: LT01_EX10: Elabore um algoritmo para calcular o salário final de um trabalhador, 
recebendo a quantidade de horas trabalhadas, a quantidade de horas extras, quantidade de 
horas ausentes e o valor do salário mínimo, sabendo que:

a) as horas trabalhadas e ausentes valem 4% do salário mínimo;
b) as horas extras valem 50% a mais do que as horas trabalhadas;
c) o salário final é igual a soma das horas trabalhadas com as hora extras, descontadas as horas ausentes e 11% de INSS.

ENTRADA
- salarioMinimo
- horasT 
- horasA 
- horasE
- salarioFinal
- int
- %d

PROCESSSAMENTO
- calculo -> salarioMinimo+(horasT*4%)+(horasE*4%+50%)-(horasA*4%)-(INSS*11%)

SAÍDA
- salarioFinal

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int salarioMinimo=0,horasA=0,horasE=0,horasT=0,calc=0,calc2=0,calc3=0,calc4=0,inss=0;
    float salarioFinal=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Digite o atual salário minímo:\n");
    scanf("%d", &salarioMinimo);
    printf("Digite suas horas de trabalho:\n");
    scanf("%d", &horasT);
    printf("Digite suas horas ausentes:\n");
    scanf("%d", &horasA);
    printf("Digite suas horas extras:\n");
    scanf("%d", &horasE);
    
    calc=(salarioMinimo*0.04)*horasT;
    calc2=(salarioMinimo*0.04)*horasE;
    calc3=calc2*0.5;
    calc4=(salarioMinimo*0.04)*horasA;
    inss=salarioMinimo*0.11;
    salarioFinal=salarioMinimo+calc+calc2+calc3-calc4-inss;
    
    // SAÍDA DE DADOS
    printf("Nesse mês seu salário será de R$%.2f.\n-------------------------\n", salarioFinal);
    return 0;
}
