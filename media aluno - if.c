#include <stdio.h>
#include <stdlib.H>

int main()
{
    float nota1 = 0;
    float nota2 = 0;
    float media;

    // solicitando dados
    printf("digite sua primeira nota : ");
    scanf("%f", &nota1);

    printf("digite sua segunda nota : ");
    scanf("%f", &nota2);

system("cls || clear");

    // calculando media
    media = (nota1 + nota2) / 2;

    // finaizando dados

    printf("primeira nota : %f \n", nota1);

    printf("segunda nota : %f \n", nota2);

    printf("media : %f \n", media);
  
    if(media >= 7)
{
printf("Aprovado!!\n");
}
else
{
    printf("Reprovado!!\n");
}

    return 0;
}
