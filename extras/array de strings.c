/******************************************************************************

teste ordenação de nomes em array de strings.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,j=0;
    char array_str[5][50],array_trns[5][50];
    
    for(i=0;i<5;i++){
        printf("Insira nome [%d]: ",i+1);
        gets(array_str[i]);
    }
    printf("--------------\nTabela natural:\n");
        for(i=0;i<5;i++){
        printf("Nome [%d]: ",i+1);
        puts(array_str[i]);
    }
    printf("--------------\nTabela ordem alfabética:\n");
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
        if(strcmp(array_str[j],array_str[j+1])>0){
            strcpy(array_trns[j],array_str[j]);
            strcpy(array_str[j],array_str[j+1]);
            strcpy(array_str[j+1],array_trns[j]);
        }
        } 
    }
    for(i=0;i<5;i++){
        printf("Nome [%d]: ",i+1);
        puts(array_str[i]);
    }
    

    return 0;
}
