#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void cabecalho()
{
    printf("\n====================================\n");
    printf("\tSENAI-BA\n");
    printf("====================================\n");
}
void limpartela()
{
    system("cls || clear");
}

void par(int numero)
{
   if (numero %2==0)
   {
    printf("-> NUMERO PAR!!");
   }
   else
   {
    printf("-> NUMERO IMPAR!!");
   }
}

int main()
{
    int numero;
   
    cabecalho();
    printf("Digite um numero : ");
    scanf("%d", &numero);
    limpartela();
 
    cabecalho();
    printf("Numero: %d",numero);
    par(numero);

    return 0;
}