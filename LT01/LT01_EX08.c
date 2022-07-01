/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 30/03/2022
Enunciado.: LT01_EX08: Elabore um algoritmo que calcule o preço de venda 
de um carro. O preço de venda é formado pelo preço da montadora, mais 15% de 
lucro, mais 11% de IPI, mais 17% de ICMS. As porcentagens são sobre o preço da 
montadora, que é lido do usuário. Apresente na tela o preço final e o valor dos impostos.

ENTRADA
- valorMontadora
- valorLucro (valorMontadora*15%)
- valorIPI (valorMontadora*11%)
- valor ICMS (valorMontadora*17%)
- depend
- salarioFinal
- int
- %d

PROCESSSAMENTO
- calculo -> valorMontadora+(valorMontadora*15%)+(valorMontadora*11%)+(valorMontadora*17%)

SAÍDA
- valorFinal
- valorLucro (valorMontadora*15%)
- valorIPI (valorMontadora*11%)
- valorICMS (valorMontadora*17%)

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int valorMontadora=0;
    float valorLucro=0,valorFinal=0,valorIPI=0,valorICMS=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Digite o preço cobrado pela montadora:\n");
    scanf("%d", &valorMontadora);
    valorLucro=valorMontadora*0.15;
    valorIPI=valorMontadora*0.11;
    valorICMS=valorMontadora*0.17;
    valorFinal=valorMontadora+valorLucro+valorIPI+valorICMS;
    
    
    // SAÍDA DE DADOS
    printf("O preço a ser pago pelo carro é R$%.2f.\n-------------------------\n", valorFinal);
    printf("Você estará pagando R$%.2f. como lucro da loja.\n", valorLucro);
    printf("Você estará pagando R$%.2f como IPI.\n", valorIPI);
    printf("Você estará pagando R$%.2f. como ICMS.", valorICMS);
    return 0;
}
