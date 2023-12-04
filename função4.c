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

void tabuada(int numero)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",numero,i,numero*i);
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
    tabuada(numero);

    return 0;
}