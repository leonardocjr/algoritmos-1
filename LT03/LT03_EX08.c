/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 09/04/2022
Enunciado.: LT03_EX08: Faça um programa em linguagem C que peça um número inteiro 
e apresente a mensagem “é par” ou “é ímpar”.
Dica: use o operador % (resto da divisão de inteiros). 
Por exemplo: 5 % 2 retornará o resto da divisão de 5 por 2. 
Então, 5 % 2 = 1 (porque 5 dividido por 2 é igual a 2 e resta 1). 
Por outro lado, 6 % 2 = 0, porque 6 dividido por 2 é igual a 3 e resta 0



ENTRADA
- int &d 
- num

PROCESSSAMENTO
- se num/2 % 0 {par}
- se não {impar}

SAÍDA
- par ou impar

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int num=0;
    printf("Digite um número: ");
    scanf("%d", &num);
    
    // PROCESSSAMENTO DE DADOS
    if(num%2 == 0){
        printf("Esse número é par.");
    }else{
        printf("Esse número é ímpar.");
    }
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
