/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 13/06/2022
Enunciado.: LT09_EX02: Faça um algoritmo que tenha um registro (estrutura) que represente 
um DVD em uma locadora. Então, deve ser armazenado o título, gênero, duração e prateleira. 
O programa deve pedir os respectivos dados do DVD. Em seguida, deve apresentá-los.          

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DVDS 1
#define LOC 1

int main()
{
    // ENTRADA DE DADOS
    int i,j;
    typedef struct DVD{
        char titulo[50],
        genero[30];
        int duracao,
        prateleira;
    }DVD;
    typedef struct Locadora{
        char nome[30];
        DVD filmes[DVDS];
    } Locadora;
    
    Locadora locadoras[LOC];
    
    for(i=0;i<LOC;i++){
        printf("Digite o nome da locadora: ");
        fgets(locadoras[i].nome, 30, stdin);
        for(j=0;j<DVDS;j++){
            printf("Digite o título do filme: ");
            fgets(locadoras[i].filmes[j].titulo, 50, stdin);
            printf("Digite o gênero do filme: ");
            fgets(locadoras[i].filmes[j].genero, 30, stdin);
            printf("Digite a duração do filme (em minutos):  ");
            scanf("%d", &locadoras[i].filmes[j].duracao);
            printf("Digite em qual prateleira o filme está: ");
            scanf("%d", &locadoras[i].filmes[j].prateleira);
        }
    }
    
    
    // SAÍDA DE DADOS
    for(i=0;i<LOC;i++){
        printf("\nNome da locadora: %s", locadoras[i].nome);
        printf("DVDs disponíveis: \n");
        
        for(j=0;j<DVDS;j++){
            
            
            printf("\nTítulo: %s", locadoras[i].filmes[j].titulo);
            printf("Gênero: %s", locadoras[i].filmes[j].genero);
            printf("Duração: %d hora(s) e %d minuto(s).", locadoras[i].filmes[j].duracao/60,locadoras[i].filmes[j].duracao%60);
            printf("\nPrateleira: %d", locadoras[i].filmes[j].prateleira);
        }
    }
    
    return 0;
}
