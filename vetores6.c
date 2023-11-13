#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
     int i =0;
     int numeros[10];
     int positivos =0;
     int negativos =0;
     int somaP =0;
     
     

     printf("digite os elementos do vetor : \n");
     for(i = 0; i < 10; i++)
     {
        printf("Digite %d numero: \n", i+1);
        scanf("%d", &numeros[i]);
        numeros[i] < 0 ? negativos++ : (somaP += numeros[i]);
        numeros[i] > 0 ? positivos++ : (somaP += numeros[i]);
    }
    
     system ("cls || clear ");
    
     printf("\nEXIBINDO RESULTADOS\n");
     
     for (i = 0; i < 10; i++)
     {
        printf("idade %d : %d\n\n",i +1, numeros[i]);
     }
     printf("Positivos : %d \n",positivos);
     printf("negativos : %d \n",negativos);
     printf("Soma positiva : %d \n",somaP);
     return 0;
}