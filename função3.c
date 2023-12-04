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

float mediar(int numero1, int numero2)
{ 
    float media;
    media = (numero1 + numero2) / (float)2; 
    return media;  
}

int main()
{
int numero1;
int numero2;
float media;


cabecalho ();
printf("Digite seu primeiro numero :");
scanf("%d",&numero1);
limpartela();

cabecalho();
printf("digite seu segundo numero : ");
scanf("%d",&numero2);
limpartela();

media = mediar(numero1, numero2);

cabecalho();
printf("Primeiro numero : %d \n",numero1);
printf("Segundo numero : %d \n",numero2);
printf("Media : %.1f \n",media);


return 0;
}