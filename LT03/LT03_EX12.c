/*

Nome..: Leonardo Canuto Junior
Turma.: EC31C-C11
Data..: 09/04/2022
Enunciado.: LT03_EX12: Faça um programa em linguagem C que peça a idade do usuário 
e apresente uma mensagem de acordo com sua faixa etária:

a. Se for maior ou igual a 65 anos: “você está na melhor idade”;
b. Se for maior ou igual a 40 anos (e menor que 65): “você está na meia idade”;
c. Se for maior ou igual a 30 anos (e menor que 40): “você é adulto”;
d. Se for maior ou igual a 18 anos (e menor que 30): “você é adulto jovem”;
e. Se for maior ou igual a 12 anos (e menor que 18): “você é adolescente”;
f. Se for maior ou igual a 2 anos (e menor que 12): “você é criança”;
g. Se não for nenhuma das anteriores (menor de 2 anos): “você é bebê”.



ENTRADA
- int &d
- idade

PROCESSSAMENTO
se>idade{mensagem}

SAÍDA
- result

*/

#include <stdio.h>
#include<conio.h>

int main()
{
    // ENTRADA DE DADOS
    int idade=0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    // PROCESSSAMENTO DE DADOS
    if(idade>=65){
        printf("Você está na melhor idade.");
    }else if(idade>=40){
        printf("Você está na meia idade.");
    }else if(idade>=30){
        printf("Você é adulto.");
    }else if(idade >=18){
        printf("Você é adulto jovem.");
    }else if(idade>=12){
        printf("Você é adolescente.");
    }else if(idade>=2){
        printf("Você é criança.");
    }else{
        printf("Você é bebê.");
    }
    
    // SAÍDA DE DADOS
    printf("\nFim do programa.");
    return 0;
}
