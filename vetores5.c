#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
     int i =0;
     int idades[6];
     char nomes [6][200];
     
     

     printf("digite os elementos do vetor : \n");
     for(i = 0; i < 6; i++)
     {
        printf("Digite %d nome: \n", i+1);
        scanf("%s", &nomes[i]);
        
        printf("Digite %d idade : \n", i+1);
        scanf("%d", &idades[i]);
      fflush(stdin);
     }
    
     system ("cls || clear ");
    
     printf("\nEXIBINDO RESULTADOS\n");
     for (i = 0; i < 6; i++)
     {
    
        printf("nomes %d : %s\n",i +1, nomes[i]);
        printf("idade %d : %d\n\n",i +1, idades[i]);
     }
     
     return 0;
}
