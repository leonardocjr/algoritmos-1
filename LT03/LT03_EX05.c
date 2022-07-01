/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 05/04/2022
Enunciado.: LT03_EX05: Faça um programa em linguagem C que receba 
uma operação (caracter: + - * / ) e depois, 2 valores reais. 
Realize apenas a operação escolhida pelo usuário.


ENTRADA
- valorMath
- char
- %c

PROCESSSAMENTO
- comparar qual valor matematico inserido, e dependendo realizar o cálculo

SAÍDA
- resultado da comparação e da realização matemática

*/

#include <stdio.h>
#include <conio.h>

int main()
{
    // ENTRADA DE DADOS
    char valorMath;
    int val1=0,val2=0,result=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Operações disponíveis: *, /, +, -\nDigite qual operação deseja realizar: ");
    scanf("%c", &valorMath);
    
    if(valorMath == '*'){
        printf("Digite o primeiro valor:\n");
        scanf("%d", &val1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &val2);
        result=val1*val2;
            
    }else if(valorMath == '/'){
        printf("Digite o primeiro valor:\n");
        scanf("%d", &val1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &val2);
        result=val1/val2;
            
    }else if(valorMath == '+'){
        printf("Digite o primeiro valor:\n");
        scanf("%d", &val1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &val2);
        result=val1+val2;
            
    }else if(valorMath == '-'){
        printf("Digite o primeiro valor:\n");
        scanf("%d", &val1);
        printf("Digite o segundo valor:\n");
        scanf("%d", &val2);
        result=val1-val2;
    }else{
        printf("Isso não é uma operação válida.\n");
    };
    
    // SAÍDA DE DADOS
    printf("Fim! O resultado do seu cálculo é %d.", result);
    return 0;
}
