/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 13/06/2022
Enunciado.: LT09_EX03: Faça um algoritmo que tenha um registro (estrutura) que represente 
um pokemon. O usuário deve digitar o nome, vida, ataque e defesa do pokemon. 
Em seguida, os dados devem ser apresentados.        

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define POKE 5

int main()
{
    // ENTRADA DE DADOS
    int i;
    typedef struct pokedex{
        char nome[30];
        int vida,
        ataque,
        defesa;
    }pokedex;
    pokedex pokemons[POKE];
    
    for(i=0;i<POKE;i++){
            printf("Digite o nome do pokemon %d: ",i+1);
            scanf("%s", pokemons[i].nome);
            printf("Vida do pokémon %d: ",i+1);
            scanf("%d", &pokemons[i].vida);
            printf("Ataque do pokémon %d: ",i+1);
            scanf("%d", &pokemons[i].ataque);
            printf("Defesa do pokémon %d: ",i+1);
            scanf("%d", &pokemons[i].defesa);
            printf("\n");
    }
    
    
    // SAÍDA DE DADOS
    for(i=0;i<POKE;i++){
            printf("\nPokémon %d",i+1);
            printf("\nNome: %s", pokemons[i].nome);
            printf("\nVida: %d HP", pokemons[i].vida);
            printf("\nAtaque: %d", pokemons[i].ataque);
            printf("\nDefesa: %d\n", pokemons[i].defesa);
    }
    
    return 0;
}
