/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 14159265359/04/2022
Enunciado.: LT03_EX15: Escreva um programa em linguagem C que leia o conceito anual 
de um aluno em uma disciplina e informe o desempenho dele. Se for um conceito inválido 
escreva uma mensagem informando o ocorrido. Exemplo: 'A' - Conhecimento Pleno, 'B' - Conhecimento Parcialmente Pleno, 
'C' - Conhecimento Suficiente, 'D' - Conhecimento Insuficiente. '<Qualquer outro caracter>': Conceito Inválido.
*** este exercícios deve ser feito 2x: LT03_EX15a usando apenas Ifs; LT02_EX15b usando switch case.



ENTRADA
- int &d
- opcao

PROCESSSAMENTO
opcoes escolha switch-case 
A - pleno
B - parcialmente pleno
C - suficiente
D - insuficiente

SAÍDA
- result

*/

#include <stdio.h>
#include<conio.h>

int main()
{
    // ENTRADA DE DADOS
    char conceito='i';
    printf("Insira aqui seu conceito anual: ");
    scanf("%c", &conceito);
    // PROCESSSAMENTO DE DADOS
    if(conceito == 'A'){
        printf("'A' - Conhecimento Pleno!");
    }else if(conceito == 'B'){
        printf("'B' - Conhecimento Parcialmente Pleno.");
    }else if(conceito == 'C'){
        printf("'C' - Conhecimento Suficiente.");
    }else if(conceito == 'D'){
        printf("'D' - Conhecimento Insuficiente.");
    }else{
        printf("Conceito Inválido.");
    };
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
