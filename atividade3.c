#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "portuguese");
  int numero = 0;

  // solicitando dados do usuÃ¡rio.
  printf("digite um numero :");
  scanf("%d", &numero);

  fflush(stdin);
  system("cls || clear");

  // finaizando dados

  printf("numero  : %d \n", numero);
  if (numero > 10)
  {
    printf("É maior que 10!!");
  }

  if (numero < 10)
  {
    printf("É menor que 10!!");
  }

  if (numero == 10)
  {
    printf("É igual a 10!!");
  }

  // outra forma
  // if (numero == 10)
  //   {
  //     printf("É igual a 10!!");
  //  }
  // else if (numero > 10)
  //  {
  // printf("É  maior que 10!!");
  //  }
  // else if (numero > 5)
  //  {
  // printf("É maior que 5 !!");
  // }
  // else
  //  {
  // printf ("Não é maior que 5!!");
  //  }

  return 0;
}
