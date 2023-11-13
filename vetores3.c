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
     float media;
     int soma;
     int maiornumero;
     int menornumero=999999999;
     

     printf("digite os elementos do vetor : \n");
     for(i = 0; i < 5; i++)
     {
        printf("Nota %d : \n", i+1);
        scanf("%d", &numeros[i]);
     maiornumero = maiornumero > numeros[i] ? maiornumero : numeros[i];
     menornumero = menornumero < numeros[i] ? menornumero : numeros[i];
     }
    
     system ("cls || clear ");
    
     for (i = 0; i < 5; i++)
     {
        printf("Nota %d : %d\n",i +1, numeros[i]);
     }
     
    
     printf("Maior numero: %d \n", maiornumero);
     printf("Menor numero: %d \n", menornumero);
   
     return 0;
}