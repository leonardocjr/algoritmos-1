/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 09/04/2022
Enunciado.: LT03_EX10: Crie um programa em linguagem C que leia 3 números inteiros 
diferentes e imprima os números em ordem crescente.



ENTRADA
- int &d
- num1, num2, num3

PROCESSSAMENTO
- num1, num2, num3 ok
- num3, num1, num2 ok
- num1, num3, num2 ok

- num2, num 1, num3 ok
- num3, num2, num1 ok
- num2, num3, num1 ok




SAÍDA
- sequencia

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int num1=0,num2=0,num3=0;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    // PROCESSSAMENTO DE DADOS
    if(num1>num2){
        if(num2>num3){
            printf("Sequência é %d, %d e %d.", num3, num2, num1);
        }else if(num3>num1){
            printf("Sequência é %d, %d e %d.", num2, num1, num3);
        }else{
            printf("Sequência é %d, %d e %d.", num2, num3, num1);
        }
    }
    if(num2>num1){
        if(num1>num3){
            printf("Sequência é %d, %d e %d.", num3, num1, num2);
        }else if(num2>num3){
            printf("Sequência é %d, %d e %d.", num1, num3, num2);  
        }else{
            printf("Sequência é %d, %d e %d.", num1, num2, num3);  
        }
    }
    
    // SAÍDA DE DADOS
    
    printf("\nFim do programa.");
    return 0;
}
