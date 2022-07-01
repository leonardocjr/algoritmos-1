/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 20/04/2022
Enunciado.: LT04a_EX10: Faça um algoritmo que conte de 1 até 16, mas da seguinte forma:
1
2
3
PIN
5
6
7
PIN
9
10
11
PIN
13
14
15
PIN



ENTRADA
- cont
- val

PROCESSSAMENTO
- while (cont<=16), if(cont%4==0){fala pin} else{conta normal}

SAÍDA
- contar até 16, mas 4, 8, 12 e 16 substitui por PIN

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int cont=1;
    printf("Iniciando programa...\n\n");
    
    // PROCESSSAMENTO DE DADOS

        while(cont<=16){
            if(cont%4==0){printf("PIN!\n");}else{printf("%d\n", cont);}
            cont++;
        }
    
    // SAÍDA DE DADOS
    return 0;
}
