#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
	
	
	    setlocale(LC_ALL, "Portuguese");
	    int opcao,i,tam,buscar,encontrado,quant;
		
		struct referencias{
			
		char nome[100],vacina[100],cpf[20],codigo[10];
		int data[10];
		float numeroLote[10];	
	}
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];




             while(opcao!=4){
          system("cls");
		  
		      printf("_________________________________________________________________________________________\n\n");
		      printf("\t\t\t\t\tSeja Bem Vindo ao Cadastro de Vacinação\n");
		      printf("__________________________________________________________________________________________\n\n");
		      printf("1-Realizar Cadastro\n");
		      printf("2-Listar Cadastros Realizados\n");
		      printf("3-Consultar CPF\n");
		      printf("4-Sair\n");
		      printf("--------------------------------------------------------------------------------------\n\n");
		      printf("\nQual Opção Voce Deseja Acessar?\n");
		      scanf("%d",&opcao);
	switch(opcao){
		        case 1:
		        	  system("cls");
		        	  printf("\n\nInforme, quantos cadastros deseja realizar?\n");;
			          scanf("%d",&quant);
		        for(i=1;i<=quant;i++){
			          system("cls");
			          printf("--------------------------------------------------------------------------------------\n");
			          printf("\n\t\t  Iniciando a Realização do Cadastro\t%d\n\n",i);
			          printf("--------------------------------------------------------------------------------------\n");
			          printf("\nInsira seu nome: ");
			          fflush(stdin);
			          scanf("%[^\n]s",CA [i].nome);
			          printf("Digite seu CPF: ");
			          fflush(stdin);
			          scanf("%[^\n]s",CA [i].cpf);
			          printf("Informe sua Vacina: ");
			          fflush(stdin);
			          scanf("%[^\n]s",CA [i].vacina);
			          printf("Informe á Data: ");
			          fflush(stdin);
			          scanf("%[^\n]s",CA [i].data);
			          printf("Numero do Lote: ");
			          fflush(stdin);
			          scanf("%[^\n]s",CA [i].numeroLote);
			          printf("\n\n\t\t");
			          system("pause");
			          system("cls");
		        }
		        break;
		        
		        case 2:
		        	system("cls");
		        	
		        	for(i=1;i<=quant;i++){
				        system("cls");
				        printf("--------------------------------------------------------------------------------------\n");
				        printf("\n\t   Cadastros Realizados %d\n\n",i);
				        printf("--------------------------------------------------------------------------------------\n");
				        printf("Codigo: %d\n",i);
				        printf("Nome : %s\n",CA [i].nome);
				        printf("CPF : %s\n",CA [i].cpf);
				        printf("Vacina : %s\n",CA [i].vacina);
				        printf("Data : %s\n",CA [i].data);
				        printf("Numero do Lote : %s\n",CA [i].numeroLote);
				        printf("=========================================\n");
				        system("pause");
			}
				break;
			
				case 3:	
				        printf("Digite o CPF que deseja encontrar:");
				        fflush(stdin);
				        scanf("%s", &buscar);
				        for(i = 0; i<quant; i++){
				        fflush(stdin);
							if(strcmp(buscar,CA[i].cpf)==0)
						    {
						    	printf("Nome: %s\n",CA[i].nome);
						    	printf("CPF: %s\n",CA[i].cpf);
						    	printf("Vacina: %s\n",CA[i].vacina);
						    	printf("Data: %s\n",CA[i].data);
						    	printf("Numero do Lote: %s\n",CA[i].numeroLote);
						    	printf("=========================================\n");
						    }{
								printf("CPF nao encontrado");	
							}
						}
						    
				break;
						    
					}
				}
		
	system("pause");
	return 0;
}	
