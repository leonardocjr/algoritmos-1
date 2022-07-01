/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 06/04/2022
Enunciado.: LT03_EX07: Criar um algoritmo que leia 2 números. 
Caso o primeiro número lido seja maior que o segundo, imprima na tela o 
primeiro número menos o segundo, caso contrário mostre a soma dos dois números.



ENTRADA
- num1
- num2
- int
- %d

PROCESSSAMENTO
- se( primeiro > segundo){
    num1-num2=result
}se não {
    num1+num2=result
}

SAÍDA
- result

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int num1=0,num2=0,result=0;
    
    // PROCESSSAMENTO DE DADOS
    printf("Digite um número aleatório: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Analisando...\n");
    
    if(num1>num2){
        printf("O primeiro número é maior, sendo assim será uma subtração.");
        result=num1-num2;
    }else {
        printf("O segundo número é maior ou igual, sendo assim será uma soma.");
        result=num1+num2;
    }
    
    // SAÍDA DE DADOS
    printf("\nO resultado dos números é %d", result);
    return 0;
}
