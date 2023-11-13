#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
     int i;
     int numeros[5];
     int pares=0;
     int impares=0;
     

     printf("digite os elementos do vetor : \n");
     for(i = 0; i < 5; i++)
     {
        printf("Nota %d : \n", i+1);
        scanf("%d", &numeros[i]);
      
        if (numeros[i] %2==0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    
     }
    
     system ("cls || clear ");
    
     for (i = 0; i < 5; i++)
     {
        printf("Nota %d : %d\n",i +1, numeros[i]);
     }
     
     printf("Pares : %d \n", pares);
     printf("impares : %d \n", impares);
   
     return 0;
}