/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 03/04/2022
Enunciado.: LT01_EX09: Elabore um algoritmo que leia um número inteiro representando 
a quantidade de alunos de uma turma. Apresente a quantidade de grupos de 4 alunos 
que podem ser formados, e quantos alunos ficam de fora, sem formar um grupo completo.

ENTRADA
- alunos
- int
- %d

PROCESSSAMENTO
- calculo -> alunos/4 e alunos%4

SAÍDA
- resultado qntGrupos, qntResto

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int alunos=0, qntGrupos=0, qntResto=0;
    
    // PROCESSSAMENTO DE DADOS
    
    printf("Digite o total de alunos da sala:\n");
    scanf("%d", &alunos);
    qntGrupos=alunos/4;
    qntResto=alunos%4;
    
    // SAÍDA DE DADOS
    if(alunos < 4){
        printf("Não é possível formar grupos de 4 alunos.\n");
    }else{
        printf("É possível formar-se %d grupos.\n" , qntGrupos);
        };
    if(qntResto == 0){
        printf("Não sobrou alunos sem grupo.");
    }else{
        printf("A quantidade de alunos sem grupo foi %d.", qntResto);
    };
    
    
    return 0;
}
