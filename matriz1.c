#include <stdio.h>
#include <stdlib.h>

int main()
{
   float notas [3][3];
   char nomes [3][200];
   int i=0,j=0;
   float media[3];
   float soma;
   
   for(i=0;i<3;i++){
       printf("Digite um nome :\n");
       gets(nomes[i]);
       
       for(j=0;j<3;j++)
       {
        printf("Digite a nota do aluno : \n");
        scanf("%f",&notas[i][j]);
        soma += notas[i][j];
     
       }
      media[i] = soma /3;
       soma =0;
       fflush(stdin);
    system ("cls  ||clear");    
   }

   printf("\nExibindo as informações dos alunos...\n");
   for(i=0;i<3;i++){
       printf("\nNome : %s \n",nomes[i]);
       for(j=0;j<3;j++)
       {
        printf("Notas : %.1f \n",notas[i][j]);
       }
       printf("Media : %.1f \n", media[i]);
   }
   return 0;
}
