#include <stdio.h>
#include <stdlib.h>

int main()
{
   float notas [2][2];
   char nomes [3][200];
   int i=0,j=0;
   float media[2];
   float soma;
   
   for(i=0;i<3;i++){
       printf("Digite o nome da materia :\n");
       gets(nomes[i]);
       
       for(j=0;j<2;j++)
       {
        printf("Digite a nota do aluno : \n");
        scanf("%f",&notas[i][j]);
        soma += notas[i][j];
     
       }
      media[i] = soma /2;
       soma =0;
       fflush(stdin);
    system ("cls  ||clear");    
   }

   printf("\nExibindo as informações dos alunos...\n");
   for(i=0;i<3;i++){
       printf("\nmateria : %s \n",nomes[i]);
       for(j=0;j<2;j++)
       {
        printf("Notas : %.1f \n",notas[i][j]);
       }
       
       printf("Media : %.1f \n", media[i]);
        if (media[i] >= 7)
   {
   	printf("Aprovado!!");
   }else if (media[i] >= 5)
   {
   	printf("Recuperação!!");
   }
   else
   {
   	printf("Reprovado!!");
   }
   }
  
   return 0;
}
