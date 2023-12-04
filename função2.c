#include <stdio.h>
#include <stdlib.h>

void cabecalho()
{
printf("\n====================================\n");
printf("\tSENAI-BA\n");
printf("====================================\n");
}
void limpartela()
{
system ("cls || clear");
}

int somar(int numero1, int numero2)
{ 
    int soma;
    soma = numero1 + numero2;
    return soma;
}

int main()
{
int numero1;
int numero2;
int soma;


cabecalho ();
printf("Digite seu primeiro numero :");
scanf("%d",&numero1);
limpartela();

cabecalho();
printf("digite seu segundo numero : ");
scanf("%d",&numero2);
limpartela();

soma = somar(numero1, numero2);

cabecalho();
printf("Primeiro numero : %d \n",numero1);
printf("Segundo numero : %d \n",numero2);
printf("Soma : %d \n",soma);

return 0;
}