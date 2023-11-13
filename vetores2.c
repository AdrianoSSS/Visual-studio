#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
     int i;
     float numeros[4];
     float media;
     int soma;
     

     printf("digite os elementos do vetor : \n");
     for(i = 0; i < 4; i++)
     {
        printf("Nota %d : \n", i+1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
        media = soma / 4;
     }
     system ("cls || clear ");

     for (i = 0; i < 4; i++)
     {
        printf("Nota %d : %.1f\n",i +1, numeros[i]);
    
     }
     if(media >= 7)
     {
      printf("Aprovado!!\n");
      printf("Soma : %d \n",soma);
      printf("Média : %.1f \n",media);
     }else if (media >= 5)
     {
      printf("Recuperação!!\n");
      printf("Soma : %d \n",soma);
      printf("Média : %.1f \n",media);
     }else
     {
      printf("Reprovado!!\n");
      printf("Soma : %d \n",soma);
      printf("Média : %.1f \n",media);
     }
     
     
     return 0;
}