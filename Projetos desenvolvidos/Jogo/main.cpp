#include <iostream>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int i,j,linC,linS,colC,colS,VALIDE=0,opcao=1;
	do{
	
	do{
		srand(time(NULL));
		linS = rand() % 3;
		colS = rand() % 3;
		printf("Sua vez:\n");
		printf("  0 1 2\n");
		for(i=0;i<3;i++){
			printf("%d ", i);
			for(j=0;j<3;j++){
				printf(". ");
			}
			printf("\n");
		}	
		
		do{
		printf("\n");	
		printf("Digite a linha do couracado: ");
		scanf("%d", &linC);
		printf("Digite a coluna do couracado: ");
		scanf("%d", &colC);
	
		}while(linC < 0 || colC < 0 || linC > 2 || colC > 2);
		
		if(linC == linS && colC == colS){
			printf("\n  0 1 2\n");
			for(i = 0;i<3;i++){
				printf("%d ", i);
				for(j=0;j<3;j++){
					if(i==linC && j==colC){
						printf("C ");
					}
					else if(i==linS && j==colS){
						printf("S ");
					}
					else{
						printf(". ");
					}
				}
			printf("\n");
			}
			printf("-> Parabens, voce acertou o submarino!\n");
			VALIDE=1;
		}else{
			printf("\n  0 1 2\n");
			for(i = 0;i<3;i++){
				printf("%d ", i);
				for(j=0;j<3;j++){
					if(i==linC && j==colC){
						printf("C ");
					}
					else if(i==linS && j==colS){
						printf("S ");
					}
					else{
						printf(". ");
					}
				}
			printf("\n");
			}
			printf("-> Voce errou!\n");
			printf("\nVez do robo:");
			srand(time(NULL));
			linS = rand() % 3;
			colS = rand() % 3;
			if(linS == linC && colS == colC){
				printf("\n  0 1 2\n");
				for(i = 0;i<3;i++){
					printf("%d ", i);
				for(j=0;j<3;j++){
					if(i==linS && j==colS){
					printf("S ");
					}
					else if(i==linC && j==colC){
						printf("C ");
					}
					else{
						printf(". ");
					}
				}
				printf("\n");
				}
			printf("-> Perdeu, a maquina acertou o couracado!\n");
			VALIDE=1;
			}else{
					printf("\n  0 1 2\n");
					for(i = 0;i<3;i++){	
					printf("%d ", i);
					for(j=0;j<3;j++){
						if(i==linS && j==colS){
						printf("S ");
						}
						else if(i==linC && j==colC){
							printf("C ");
						}
						else{
							printf(". ");
							}
					}
					printf("\n");
				}
			printf("-> A maquina errou!\n\n");
			srand(time(NULL));
			linS = rand() % 3;
			colS = rand() % 3;
			}
		}
	}while(VALIDE==0);
	printf("\nDigite 0 para sair ou 1 para jogar novamente: ");
	scanf("%d", &opcao);
	if(opcao==1)VALIDE=0;
	}while(opcao==1);
	
}
