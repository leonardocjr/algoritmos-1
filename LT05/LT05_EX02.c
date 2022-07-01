/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/05/2022
Enunciado.: LT05_EX02: Faça um programa em Linguagem C que peça o salário de 8 salários 
de uma determinada empresa. Armazene esses dados em um vetor. 
Calcule a média salarial da empresa. Depois, o programa deve apresentar quantos funcionários recebem menos que a média salarial.



ENTRADA
- Receber 8 numeros reais
- float %f vetor

PROCESSSAMENTO
- for 8x receber numero
- calcular media
- selecionar funcionarios com salario abaixo da media

SAÍDA
- media salaria e salarios abaixo da media

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int i=0,abaixo=0;
    float salario[8],media=0,total=0;
    
    // PROCESSSAMENTO DE DADOS
    for(i=0;i<8;i++){
        printf("%d. Digite seu salário: ", i+1);
        scanf("%f", &salario[i]);
        total+=salario[i];
    }
    
    media=total/8;
    
    for(i=0;i<8;i++){
        if(media>salario[i]){
            abaixo++;
        }
    }
    
    // SAÍDA DE DADOS
    printf("\nA média salarial dos empregados é R$%2.f", media);
    
    printf("\nO total de funcionários que recebem menos da média é %d.", abaixo);
    return 0;
}
