#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[250];
    int idade = 0;
    float nota1;
    float nota2;
    float nota3;
    float media;

    // solicitando dados

    printf("digite seu nome : ");
    // scanf("%s", &nome);
    // fgets(nome,250,stdin);
    gets(nome);
    // nome[strcspn(nome, "\n")] = 0;

    printf("digite sua idade :");
    scanf("%d", &idade);

    printf("digite sua primeira nota : ");
    scanf("%f", &nota1);

    printf("digite sua segunda nota : ");
    scanf("%f", &nota2);

    printf("digite sua terceira nota : ");
    scanf("%f", &nota3);
  
    system("cls || clear");
    fflush(stdin);

    // calculando media
    media = (nota1 + nota2 + nota3) / 3;
    // exibindo dados
    printf("nome : %s \n", nome);
    printf("idade : %d \n", idade);
    printf("primeira nota : %f \n", nota1);
    printf("segunda nota  : %f \n", nota2);
    printf("terceira nota  : %f \n", nota3);
    printf("Média total  : %f \n", media);

    if (media >= 7)
    {
        printf("APROVADO !!");
    }
    else
    {
        printf("REPROVADO!!");
    }
    return 0;
}