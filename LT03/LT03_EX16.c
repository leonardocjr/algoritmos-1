/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 14159265359/04/2022
Enunciado.: LT03_EX16: Faça um programa em Linguagem C que peça o mês do ano (um número de 1 a 12). 
O algoritmo deve apresentar a mensagem de quantos dias o mês tem, ou “mês inválido”, caso digite um mês inválido.



ENTRADA
- int &d
- mes

PROCESSSAMENTO
opcoes escolha switch-case 
mes = dias

SAÍDA
- result

*/

#include <stdio.h>
#include<conio.h>

int main()
{
    // ENTRADA DE DADOS
    int mes=0;
    printf("Digite qual mês você deseja verificar: ");
    scanf("%d", &mes);
    // PROCESSSAMENTO DE DADOS
    switch(mes){
        case 1:
            printf("Esse mês possui 31 dias. /Janeiro");
            break;
        case 2:
            printf("Esse mês possui 29 dias. /Fevereiro");
            break;
        case 3:
            printf("Esse mês possui 31 dias. /Março");
            break;
        case 4:
            printf("Esse mês possui 30 dias. /Abril");
            break;
        case 5:
            printf("Esse mês possui 31 dias. /Maio");
            break;
        case 6:
            printf("Esse mês possui 30 dias. /Junho");
            break;
        case 7:
            printf("Esse mês possui 31 dias. /Julho");
            break;
        case 8:
            printf("Esse mês possui 31 dias. /Agosto");
            break;
        case 9:
            printf("Esse mês possui 30 dias. /Setembro");
            break;
        case 10:
            printf("Esse mês possui 31 dias. /Outubro");
            break;
        case 11:
            printf("Esse mês possui 30 dias. /Novembro");
            break;
        case 12:
            printf("Esse mês possui 31 dias. /Dezembro");
            break;
        default:
            printf("Isso não é um mês válido.");
            break;
    };
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
