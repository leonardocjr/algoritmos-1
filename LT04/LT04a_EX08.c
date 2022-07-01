/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX08: Faça um programa em Linguagem C que receba idade e 
o peso de sete pessoas. Calcule e mostre: 
i) a quantidade de pessoas com mais de 90 quilos; 
ii) a média das idades das pessoas.



ENTRADA
- cont
- peso
- idade

PROCESSSAMENTO
- while (cont<=7)

SAÍDA
- idade somada /3 
- numero dos pesados (>90)

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=1,peso=0,idade=0,result=0,pesados=0;
    
    
    // PROCESSSAMENTO DE DADOS

        while(cont<=7){
            printf("Digite o peso da pessoa %d: ", cont);
            scanf("%d", &peso);
            printf("Digite a idade da pessoa %d: ", cont);
            scanf("%d", &idade);
            printf("-------------------------------------\n");
            result+=idade;
            if(peso>90){pesados++;}
            cont++;
        }
        printf("I) O total de pessoas acima de 90 quilos é %d.\n", pesados);
        printf("II) A média das idades são %d.", result/7);

    
    // SAÍDA DE DADOS
    return 0;
}
