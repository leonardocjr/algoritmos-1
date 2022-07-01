/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 13/06/2022
Enunciado.: LT09_EX01: Faça um algoritmo que tenha um registro (estrutura) que represente um aluno. 
O usuário deve digitar o RA, nome e endereço do aluno. Em seguida, o algoritmo deve apresentar os dados do aluno.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM 1

int main()
{
    // ENTRADA DE DADOS
    int i;
    typedef struct Registro{
        int ra;
        char nome[50],
        endereco[150];
    } Registro;
    
    Registro alunos[NUM];
    
    for(i=0;i<NUM;i++){
        
    printf("Digite seu RA: ");
    scanf("%d",&alunos[i].ra);
    
    printf("Digite seu nome: ");
    fgets(alunos[i].nome, 50, stdin); //desencargo de erro
    fgets(alunos[i].nome, 50, stdin);
    
    printf("Digite seu endereço: ");
    fgets(alunos[i].endereco, 150, stdin);
    
    }
    

    // PROCESSSAMENTO DE DADOS

    
    // SAÍDA DE DADOS
    
    for(i=0;i<NUM;i++){
        
    printf("\nSeu RA: %d", alunos[i].ra);
    printf("\nSeu nome: %s", alunos[i].nome);
    printf("Seu endereço: %s", alunos[i].endereco);
    
    }
    return 0;
}
