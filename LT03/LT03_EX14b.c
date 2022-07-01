/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 14159265359/04/2022
Enunciado.: LT03_EX14b: Idem ao exercício LT03_EX14 mas agora deverá usar um switch-case.
Faça um programa em Linguagem C que apresente um menu e pergunte ao usuário se ele deseja calcular:
1) a área de um triângulo (base vezes altura dividido por 2)
2) a área de um círculo (pi multiplicado pelo raio ao quadrado)
3) a área de um cubo (6 vezes a área do quadrado)
Depois, solicitar os dados necessários para calcular a área escolhida, e mostrar o resultado na tela.



ENTRADA
- int &d
- opcao
- PI
- b, h

PROCESSSAMENTO
opcoes escolha switch-case 
1 - area triangulo
2 - area de um circulo
3 - area de um cubo

SAÍDA
- result

*/

#include <stdio.h>
#include<conio.h>

int main()
{
    // ENTRADA DE DADOS
    int opcao=0;
    float
    PI=3.14159265359,
    base=0,
    altura=0,
    raio=0,
    lado=0;
    printf("[Menu] Bem-vindo a auto calculadora, abaixo será listado as opções. \n");
    printf("1) a área de um triângulo.\n2) a área de um círculo.\n3) a área de um cubo.\n");
    printf("Digite qual das opções acima deseja realizar: ");
    scanf("%d", &opcao);
    // PROCESSSAMENTO DE DADOS
    switch(opcao){
        case 1:
        printf("Digite a base do seu triângulo: ");
        scanf("%f", &base);
        printf("Digite a altura do seu triângulo: ");
        scanf("%f", &altura);
        printf("A área do seu triângulo é %.1f", (base*altura)/2);
        break;
    case 2:
        printf("Digite o raio do seu círculo: ");
        scanf("%f", &raio);
        printf("A área do seu círculo é %.1f", (raio*raio)*PI);
        break;
    case 3:
        printf("Digite o tamanho do lado do seu cubo: ");
        scanf("%f", &lado);
        printf("A área do seu cubo é %.1f", (lado*lado)*6);
        break;
    default:
        printf("Não é uma opção válida.");
        break;
    };
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
