/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 09/04/2022
Enunciado.: LT03_EX11: Faça um programa em linguagem C que peça um número inteiro. 
Em seguida, o programa deve apresentar uma mensagem conforme a seguinte regra: 
a. Se o valor for positivo: “Valor positivo”; 
b. Se o valor for negativo: “Valor negativo”; 
c. Se não for nenhuma das opções (se for 0): “Valor neutro”.



ENTRADA
- int &d
- num

PROCESSSAMENTO
se>0
se<0
se não ble

SAÍDA
- result

*/

#include <stdio.h>
#include<conio.h>

int main()
{
    // ENTRADA DE DADOS
    int num=0;
    printf("Digite um número qualquer: ");
    scanf("%d", &num);
    // PROCESSSAMENTO DE DADOS
    if(num>0){
        printf("O valor é positivo.");
    }else if(num<0){
        printf("O valor é negativo.");
    }else{
        printf("O valor é neutro.");
    };
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
