#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//Nome dos pilotos
char nome_piloto[100][12] = { {"Luis"}, {"Carlos"}, {"Jefferson"}, {"Francisco"}, {"Maria Clara"}, {"Heitor"},
				  {"Matheus"}, {"Lucas"}, {"Vinicius"}, {"Leonardo"}, {"Luiza"}, {"Julia"}  };

//Tempo por volta por piloto [voltas][piloto];
int tempo[8][12];

//Funcao principal do menu
char menu(void)
{
	char opc;
    printf("\n|-------------------------------|\n");
    printf("   Grande Premio de FormulaX\n");
    printf("\n  0. Sair");
    printf("\n  A. Estatistica global");
    printf("\n  B. Media dos pilotos");
    printf("\n  C. Media das voltas");
    printf("\n  D. Lider por volta");
    printf("\n  E. Abandonos");
    printf("\n  F. Grid de largada");
    printf("\n  G. Classificacao temporaria");
    printf("\n  H. Scouting do piloto");
    printf("\n\n|-------------------------------|");
    printf("\n  Digite a opcao desejada: ");
    scanf("%c", &opc);
    getchar();
    return opc;
}

//Variavel apenas para amostragem dos dados caso necessario
void testeDados(){
	int i, j;
    for(i=0;i<8;i++){
		printf("\n..:: Volta: %d ::..\n", i+1);
		for(j=0;j<12;j++){
			printf("#%.2d - %.1d:%.2d:%.3d\n", j+1, tempo[i][j]/60000, (tempo[i][j]%60000)/1000, (tempo[i][j]%60000)%1000);
		}
	}
}

int main(){
	
	//Variaveis para swtich case e loop (do-while)
	char opcao;
	int loop=1;
	
	//Variaveis para estruturas for
	int i, j;
	
	//Variaveis para calculos e reorganizações
	float m;
	int soma,media,maiorId,id,aux;
	
	//Variaveis para computação de dados
	int tmenor[12]; //Tempo menos para avaliação
	int grid[12]; //Ordem do grid por ids
	int volta[12]; //Valor das voltas por piloto
	int idade[12]; //Aleatório entre 19 a 34;
	
	//Aqui serao gerados os tempos aleatorios de cada piloto por volta
	srand(time(NULL));
	for(i=0;i<8;i++){
		for(j=0;j<12;j++){
			tempo[i][j]= 64800 + rand() % 15000;
		}
	}
	//Aqui sera gerado uma idade para cada piloto
	for(i=0;i<12;i++){
	    idade[i]=19 + rand() % 15;
	}
    
    /* ATENCAO: Nenhum piloto e definido como desistente, mas para testes pode inserir manualmente uma
    desistencia, abaixo o modelo para teste. */
    // tempo[INDICE DE VOLTA][INDICE DO PILOTO]; No caso abaixo: volta 3, piloto 6
    // tempo[2][5]=0;
    
	do{
	    opcao = menu();
	    switch( opcao ){
	        
			//Opcao de saida do programa
			case '0':
	            printf("  Voce saiu do programa, ate logo!");
	            loop=0;
	        break;
	        
	        //Opcao de exibicao de todas voltas por cada piloto
	        case 'A':
	        	
	        	//Repetir por cada piloto
	            for(i=0;i<12;i++){
	               printf("|-------------------------------|\n");
	               printf("|     ..:: Piloto: %s\n|                               |\n", nome_piloto[i]);
	               //Repetir por cada volta
				   for(j=0;j<8;j++){
	                    printf("|     Volta #%.2d -> %.1d:%.2d:%.3d     |\n", j+1, tempo[j][i]/60000, (tempo[j][i]%60000)/1000, (tempo[j][i]%60000)%1000);
	               }
	            }
	        break;
	        
	        //Opcao de exibicao do tempo medio por cada piloto
	        case 'B':
	            
	            //Repetir por cada pioloto
	            for(i=0;i<12;i++){
	               id=0;
	               printf("|-------------------------------|\n");
	               printf("|     ..:: Piloto: %s\n|                               |\n", nome_piloto[i]);
	               soma=0;media=0;id=0;
	               
				   //Repetir por cada volta, fazendo o calculo de soma e dividindo pelo numero de voltas válidas
				   for(j=0;j<8;j++){
	                   if(tempo[j][i]>0){
	                        soma+=tempo[j][i];
	                        id+=1;
	                   }else
	                        j=8;
	               }
	               media=soma/id;
	               printf("|  Seu tempo medio -> %.1d:%.2d:%.3d  |\n", media/60000, (media%60000)/1000, (media%60000)%1000);
	            }
	        break;
	        
	        //Opcao de exibicao media por cada volta
	        case 'C':
	        	printf("\n|   ..:: Media por volta ::..   |\n");
	            
				//Repetir por cada volta
				for(i=0;i<8;i++){
	               id=0;
	               printf("|-------------------------------|\n");
	               soma=0;media=0;id=0;
	               
				   //Repetir por cada piloto, fazendo o calculo da soma e dividindo pelo numero de voltas validas
				   for(j=0;j<12;j++){
	                    if(tempo[i][j]>0){
	                        soma+=tempo[i][j];
	                        id+=1;
	                    }else
	                        j=8;
	               }
	               media=soma/id;
	               printf("|     Volta #%.2d -> %.1d:%.2d:%.3d     |\n", i+1,media/60000, (media%60000)/1000, (media%60000)%1000);
	            }
	            printf("|-------------------------------|\n");
	        
	        break;
	        
	        //Opcao de exibicao lider por volta
	        case 'D':
	            printf("|-------------------------------|\n");
	            printf("|     ..:: Lider por volta\n|                               |\n");
	            
				//Repetir por cada volta
				for(i=0;i<8;i++){
	               maiorId=0;
	               
				   //Repetir por cada piloto, encontrando o mais rapido por volta
				   for(j=0;j<12;j++){
				   		
	                    if(tempo[i][j]<tempo[i][maiorId]){
	                    	if(tempo[i][j]>0){
	                        	maiorId=j;
	                    	}
							
						}
					}
	               printf("| Volta #%.2d                     |\n", i+1);
	               printf("| Lider: %s\n", nome_piloto[maiorId]);
	               printf("| Tempo -> %.1d:%.2d:%.3d             |\n", tempo[i][maiorId]/60000, (tempo[i][maiorId]%60000)/1000, (tempo[i][maiorId]%60000)%1000);
	               printf("|-------------------------------|\n");
	            }
	        break;
	        
	        //Opcao de exibicao de abandonos
	        case 'E':
	            id=0;
	           	printf("|-------------------------------|\n");
	            printf("|     ..:: Abandonos            |\n|                               |\n");
	            
				//Repetir por cada volta
				for(i=0;i<8;i++){
					//Repetir por cada piloto, visando ver qual piloto atinge o tempo zerado na volta
	               	for(j=0;j<12;j++){
	                    if(tempo[i][j]==0){
	                        printf("| Abandono na Volta #%.2d         |\n", i+1);
	                        printf("| Piloto: %s\n", nome_piloto[j]);
	                        printf("|-------------------------------|\n");
	                    }else{
	                        id+=1;   
	                    }
	               }
	            }
	            if(id==96){
	                printf("  -> Nao teve nenhum abandono.");
	            }
	        break;
	        
	        //Opcao de exibicao do grid de largada
	        case 'F':
				//Repete por cada piloto
	            for(i=0;i<12;i++){
	                tmenor[i]=tempo[0][i];
	                volta[i]=1;
	                //Repete por cada volta, definindo o menor tempo de cada piloto
					for(j=0;j<8;j++){
						if(tempo[j][i]>0){
	                    	if(tmenor[i]>tempo[j][i]){
	                        	tmenor[i]=tempo[j][i];
	                        	volta[i]=j+1;
	                    	}
	                	}else{
	                		j=8;
						}
	                }
	            }
	            //Define um valor inicial pro grid
	            for(i=0;i<12;i++){
	                grid[i]=i;
	            }
	            //Grid reorganiza, comparando entre os tempos menores e gerando uma classificacao
	            for(i=0;i<12;i++){
	                for(j=0;j<11;j++){
	                    if(tmenor[grid[j]]>tmenor[grid[j+1]]){
	                       aux=grid[j];
	                       grid[j]=grid[j+1];
	                       grid[j+1]=aux;
	                    }
	                }
	            }
	            printf("|-------------------------------|\n");
	            printf("|     ..:: Grid de largada      |\n|-------------------------------|------------------------------------|\n");
	            printf("| Cla | Volta |      Piloto     |   Tempo  | Diferenca |    Km/h     |\n|--------------------------------------------------------------------|\n");
	            
	            for(i=0;i<12;i++){
	                printf("| #%.2d |  %.2d   | %*s | %.1d:%.2d:%.3d |  %.2d:%.3d   | %.3fkm/h |\n", i+1, volta[grid[i]], -15, nome_piloto[grid[i]], tmenor[grid[i]]/60000, (tmenor[grid[i]]%60000)/1000, (tmenor[grid[i]]%60000)%1000, ((tmenor[grid[i]]-tmenor[grid[0]])%60000)/1000, ((tmenor[grid[i]]-tmenor[grid[0]])%60000)%1000, (4275.00/(tmenor[grid[i]]/1000))*3.6);
	            }
	        break;
	        
	        //Opcao de exibicao de classificacao temporaria por volta
	        case 'G':
	        	//Em um do-while para que valide as informacao (sendo entre 1 a 8 voltas)
	            do{
	                printf("  \n[Disponiveis 1 a 8 voltas]\nEscolha qual volta deseja : ");
	                scanf("%d", &id);
	                getchar();
	                
	                if(id<1 || id>8){
	                    printf("  -> Numero de volta invalido.\n");
	                }
	                
	            }while(id<1 || id>8);
	            printf("|-------------------------------|\n");
	            if(id>0 && id<9){
	                printf("| ..:: Classificacao volta %.2d   |\n|-------------------------------|----------------------------|\n", id);
	                printf("| Cla |      Piloto     |   Tempo  | Diferenca |    Km/h \n|------------------------------------------------------------|\n");
	                
					//Define um valor inicial pro grid
					for(i=0;i<12;i++){
	                    grid[i]=i;
	                }
	                //Reutilizando a variável de grid para organizar a tabela de acordo com os menores tempos por cada volta
	                for(i=0;i<12;i++){
	                    for(j=0;j<11;j++){
	                    	if(tempo[id-1][grid[j]]>0){
	                       		if(tempo[id-1][grid[j]]>tempo[id-1][grid[j+1]]){
	                            	aux=grid[j];
	                            	grid[j]=grid[j+1];
	                            	grid[j+1]=aux;
	                       		}
	                    	}else{
	                    		grid[11]=id=1;
							}
	                	}
					}
	                for(i=0;i<12;i++){
	                    printf("| #%.2d | %*s | %.1d:%.2d:%.3d |  %.2d:%.3d   | %.3fkm/h |\n", i+1, -15, nome_piloto[grid[i]], tempo[id-1][grid[i]]/60000, (tempo[id-1][grid[i]]%60000)/1000, (tempo[id-1][grid[i]]%60000)%1000, ((tempo[id-1][grid[i]]-tempo[id-1][grid[0]])%60000)/1000, ((tempo[id-1][grid[i]]-tempo[id-1][grid[0]])%60000)%1000, (4275.00/(tempo[id-1][grid[i]]/1000))*3.6);
	                }
	            }
	            
	        break;
	        
	        //Opcao de exibicao do scouting por piloto pesquisado
	        case 'H':
	            id=0;
	            char BUSCA[50];
	            printf("|-------------------------------|\n");
	            printf("| ..:: Scouting do piloto ::..  |\n|                               |\n");
	            printf("|-> Digite a busca: ");
	            scanf("%s", BUSCA);
	            getchar();
	            
	            //O codigo ira buscar entre todos os pilotos pelo nome digitado
	            for(i=0;i<12;i++){
	                if(strcmp(BUSCA,nome_piloto[i])==0){
	                    id=1;
	                    printf("\n| ..:: Scouting de %s ::..", nome_piloto[i]);
	                    printf("\n|-> Idade: %d anos", idade[i]);
	                    printf("\n\n|-----> Estatistica geral <-----|");
	                    
						soma=0;media=0;id=0;
						//Passar por todas as voltas validas e encontrando o tempo medio
						for(j=0;j<8;j++){
	                        if(tempo[j][i]>0){
	                            soma+=tempo[j][i];
	                            id+=1;
	                        }else
	                            j=8;
	                    }
	               		media=soma/id;
	               		printf("\n|-> T.medio ---------- %.1d:%.2d:%.3d |", media/60000, (media%60000)/1000, (media%60000)%1000);
	               		
						soma=0;m=0;id=0;
	               		//Passar por todas voltas validas e encontrando a velocidade media
	               		for(j=0;j<8;j++){
	                   		if(tempo[j][i]>0){
	                            soma+=((4275.00/(tempo[j][i]/1000))*3.6);
	                            id+=1;
	                        }else{
	                            j=8;
	                    	}
	                   
	               		}
	               		m=soma/id;
	               		printf("\n|-> V.media ------- %.3fkm/h |", m);
	           			
	                    tmenor[i]=tempo[0][i];
	                    volta[i]=1;
	                    //Passar por todas voltas para encontrar o menor tempo e em qual volta foi
	                    for(j=0;j<8;j++){
	                    	if(tempo[j][i]>0){
	                    		if(tmenor[i]>tempo[j][i]){
	                        		tmenor[i]=tempo[j][i];
	                        		volta[i]=j+1;
	                    		}
	                		}else
	                			j=8;
	                    }
	               
	               		printf("\n|-> Melhor tempo ----- %.1d:%.2d:%.3d |", tmenor[i]/60000, (tmenor[i]%60000)/1000, (tmenor[i]%60000)%1000);
	               		printf("\n|-> Melhor volta ---------- #%.2d |", volta[i]);
	               		printf("\n|-------------------------------|");
	               		printf("\n|                               |\n|---> Estatistica por volta <---|");
	               		printf("\n|-------------------------------|");
	               		printf("\n| Volta |  Tempo   |  V.media   |");
	               		printf("\n|-------|----------|------------|\n");
	               		//Exibir os dados e tempo e velocidade media por cada volta deste piloto
						for(j=0;j<8;j++){
	                    	printf("|  #%.2d  | %.1d:%.2d:%.3d | %.2fkm/h |\n", j+1, tempo[j][i]/60000, (tempo[j][i]%60000)/1000, (tempo[j][i]%60000)%1000, (4275.00/(tempo[j][i]/1000))*3.6);
	               		}
	            	}
	            }
	            //Caso o nome digitado nao esteja na lista de pilotos validos
	            if(id==0){
	                printf("|-> Nenhum piloto encontrado.\n");
	            }
	        break;
	        
	        //Caso digite uma opcao nao existente
	        default:
	            printf("\n  -> Opcao invalida.\n");
	        break;
	    
	    }
	}while(loop!=0);
	
	return 0;
}
