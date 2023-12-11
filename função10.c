#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

// #define TAM 2
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

float IMC(float altura,float peso)
{
  float IMC;
   IMC = peso / (altura*2);
   printf("IMC : %.2f \n", IMC);
   return IMC;
   
}
int main()
{
    setlocale(LC_ALL, "portuguese");
 
    float altura;
    float peso;
    cabecalho();
    printf("digite sua altura : \n");
    scanf("%f",&altura);

    printf("digite seu peso : \n");
    scanf("%f",&peso);

   
    fflush(stdin);
    limpartela();

    cabecalho();
    printf("Altura : %.2f M\n", altura);
    printf("Peso : %.2f KG\n", peso);
    IMC(altura,peso);

    return 0;
}