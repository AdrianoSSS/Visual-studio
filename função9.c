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

float media(int soma)
{
    float media;
    media = soma / 3;
    printf("media : %.1f \n", media);
    if(media >=7 )
    {
      printf("Aprovado!!");
    }
    else
    {
    printf("reprovado!!");
    }
    return media;
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero[3];
    int i;
    int soma=0;
    cabecalho();
    for (i = 0; i < 3; i++)
    {
        printf("numeros %d : \n", i + 1);
        scanf("%d", &numero[i]);
        soma += numero[i];
    }
    fflush(stdin);
    limpartela();

    cabecalho();
    for (i = 0; i < 3; i++)
    {
        printf("numeros %d : %d\n", i + 1, numero[i]);
    }
    printf("soma : %d \n", soma);
    media(soma);

    return 0;
}