/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 31/05/2022
Enunciado.: LT08_EX04: Faça um programa em Linguagem C para simular uma 
calculadora simples com as seguintes operações possíveis: 
adição, subtração, multiplicação e divisão. 

O programa inicia com a apresentação ao usuário do menu de opções:

********** 
Calculadora 
1. Adição 
2. Subtração 
3. Multiplicação 
4. Divisão 
5. Sair
********** 
Entre com a opção:

* Utilize uma função para apresentar o menu inicial e uma função de cada tipo para resolver as operações. 
Cada operações (adição; subtração; multiplicação; divisão) deve usar um tipo de função 
(sem retorno e sem parâmetro; sem retorno e com parâmetro; com retorno e sem parâmetro; com retorno e com parâmetro;) 
- não vale repetir o uso.




ENTRADA
-

PROCESSSAMENTO
-

SAÍDA
-

*/

#include <stdio.h>
#include<stdlib.h>
    char opcoes[][16] = { {"Adição"},
    {"Subtração"},
    {"Multiplicação"},
    {"Divisão"},
    {"Sair"} };
    int i,x,y,val1,val2,M,D;

void menu(void)
{
    printf("\n**********\n");
    for(i=0;i<5;i++){
        printf("%d. %s\n", i+1,opcoes[i]);
    }
    printf("**********\nEntre com a opção: ");
    scanf("%d", &i);
    if(i>0 && i<6){printf("\nVocê selecionou: %d. %s\n", i,opcoes[i-1]);}
}

void soma(void)
{
    int val1, val2;
    printf("Digite o valor 1: ");
    scanf("%d", &val1);
    printf("Digite o valor 2: ");
    scanf("%d", &val2);
    printf("O valor da soma é %d.", val1+val2);
}

void sub(int a,int b)
{
    printf("O valor da subtração é %d.", a-b);
}

int multi(void)
{
    M=val1*val2;
    return(M);
}

int divi(int a, int b)
{
    D=a/b;
    return(D);
}

int main()
{
    
    // ENTRADA DE DADOS
    menu();
    switch(i)
{
     case 1:
        soma();
     break;
     case 2:
        printf("Digite o valor 1: ");
        scanf("%d", &x);
        printf("Digite o valor 2: ");
        scanf("%d", &y);
        sub(x,y);
     break;
     case 3:
        printf("Digite o valor 1: ");
        scanf("%d", &val1);
        printf("Digite o valor 2: ");
        scanf("%d", &val2);
        printf("O valor da multiplicação é %d",multi());
     break;
     case 4:
        printf("Digite o valor 1: ");
        scanf("%d", &val1);
        printf("Digite o valor 2: ");
        scanf("%d", &val2);
        printf("O valor da divisão é %d",divi(val1,val2));
     break;
     case 5:
     printf("Você decidiu sair! Até logo ;)");
     break;
     default:
     printf("Opção inserida é inválida.");
}
    
    // PROCESSSAMENTO DE DADOS
    
    
    // SAÍDA DE DADOS
    return 0;
}
