/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 09/04/2022
Enunciado.: LT03_EX09: Faça um programa em linguagem C que leia o gênero de 
uma pessoa (‘F’ para feminino ou ‘M’ para masculino - deve ser UM caractere em maiúsculo) 
e a sua idade . Se o usuário for do sexo Feminino, apresentar a mensagem 
“Olá senhora, você tem ??? anos.  “. Do contrário, apresentar a mensagem 
“Olá senhor, você tem ??? anos. “ Trocar ??? pela idade digitada pelo usuário. 



ENTRADA
- int &d idade
- char %c F/M
- num

PROCESSSAMENTO
- se F{mulher + idade}
- se M{homem + idade}
se não {cactere digito inválido, fim do programa}

SAÍDA
- genero + idade

*/

#include <stdio.h>

int main()
{
    // ENTRADA DE DADOS
    int idade=0;
    char genero;
    printf("Opções disponíveis F / M.\nDigite seu gênero: ");
    scanf("%c", &genero);
    
    // PROCESSSAMENTO DE DADOS
    if(genero == 'F'){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Você é uma mulher e tem %d anos.", idade);
    }else if(genero == 'M'){
        printf("Digite sua idade: ");
        scanf("%d", &idade);
        printf("Você é um homem e tem %d anos.", idade);
    }else{
        printf("Opção inválida.");
    }
    
    // SAÍDA DE DADOS
    
    printf("\nFim do programa.");
    return 0;
}
