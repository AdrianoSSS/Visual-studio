#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    int numero;
    int soma = 0;
    // para  i de 1 ate 10
    // for (j = 3; j <= 7; j += 2) {
    //  for (i = 1; i <= 10; i++)  {
    //      printf("%d x %d = %d \n", j, i, i * j);
    //  }
    // printf("\n");

    // }
    // getchar(); // pausa no windows e linux
    // return 0;

    // for (i = 10; i >=1; i--)  {

    // printf("%d \n", i);
    // }
    // return 0;
    // for (i = 1; i<=10; i++){
    // printf("%d \n", i);
    //}
    // return 0;
    // printf("escolha um numero : ");
    // scanf("%d", &numero);
    // system("cls || clear");
    // for (i = i; i <= 10; i++)
    //{
    // printf("%d x %d = %d \n", i, numero, i * numero);
    // }
    // printf("\n");
    // return 0;

    // for (i = 100; i<=200; i +=2){
    //  printf("%d \n", i);
    //}
    // return 0;

    // for (i = 20; i >= 1; i -=2){
    // printf("%d \n", i);
    //  }
    //  return 0;

    // for (i = 1; i <= 20; i++)
    //{
    //     if (i % 2 == 0)
    //     {
    //    printf("%d \n", i);
    //     }
    //  }
    //return 0;

  for ( i = 1 ; i <= 5; i++)
  {
   printf("digite o %d° número : \n", i);
   scanf("%d", &numero);
   soma += numero;
   
  }
  printf("soma : %d \n", soma);
  return 0;   
}