#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct ficha_trabalho
    {
        char nome[200];
        int dataadmissao;
        int datanascimento;
        int matricula;
        char endereco[200];
      };
    struct ficha_trabalho funcionario [3];
    struct ficha_trabalho  cliente  [3];
    int i=0;
    int j=0;
    
    for (i = 0; i < 3; i++)
    {
    	  fflush(stdin);
        printf("digite o nome do funcionario : \n");
        scanf("%s", funcionario[i].nome);

        printf("digite a data de admissão do funcionario : \n");
        scanf("%d", &funcionario[i].dataadmissao);
        
         fflush(stdin);
        
        printf("digite a matricula do  funcionario : \n");
        scanf("%d", &funcionario[i].matricula);
        
        printf("digite o endereço do  funcionario : \n");
        scanf("%s", &funcionario[i].endereco);
        
         fflush(stdin);
         system("cls || clear");
      
         printf("digite o nome do cliente : \n");
        scanf("%s", cliente[i].nome);

        printf("digite a data de nascimento do cliente : \n");
        scanf("%d", &cliente[i].datanascimento);
        
         fflush(stdin);
        
        printf("digite  o endereço do cliente : \n");
        scanf("%s", &cliente[i].endereco);
         system("cls || clear");
         fflush(stdin);
    }

    system("cls || clear");

    printf("\nExibindo os dados do ficha_funcionario ...\n\n");
    for (i = 0; i < 3; i++)
    {
    	   fflush(stdin);
	  printf("%d° funcionario \n",i+1);
      printf("nome: %s \n",funcionario[i].nome);
         fflush(stdin);
      printf("data de admissão : %s \n", funcionario[i].dataadmissao);
      printf("matricula : %s \n", funcionario[i].matricula);
         fflush(stdin);
      printf("endereço : %s \n", funcionario[i].endereco);
      
	     fflush(stdin);
	  printf("\n\n");
      
      printf("%d° cliente \n",i+1);
      printf("nome: %s\n",cliente[i].nome);
         fflush(stdin);
      printf("data de nascimento: %s\n",cliente[i].datanascimento);
      printf("endereço: %s\n",cliente[i].endereco);    
	     fflush(stdin); 
      
      printf("\n\n");
    }

    return 0;
}


    
		
