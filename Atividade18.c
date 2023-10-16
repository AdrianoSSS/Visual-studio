#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
     int i;


       for (i = 1; i<=15; i +=2){
      printf("%d \n", i);
    }
    //for ( i = 1 ; i <= 5; i++)
  //{
   //printf("digite o %d° número : \n", i);
  //scanf("%d", &numero);
  // soma += numero;
  
     return 0;
}

