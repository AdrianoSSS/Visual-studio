#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int codigo;
    int datadenascimento;
    int tempotrabalho;
    int idade;
    char resultado[250];

    // solicitando dados
    printf("digite sua matr�cula :");
    scanf("%d", &codigo);

    printf("informe o ano de nascimento:");
    scanf("%d", &datadenascimento);

    printf("informe seu tempo de trabalo :");
    scanf("%d", &tempotrabalho);

    system("cls || clear");
    fflush(stdin);

    // calculando dado

    idade = 2023 - datadenascimento;

   if (idade >= 65 || tempotrabalho >= 30)
    {
        strcpy(resultado, "Requerer aposentadoria!!");
    }
    else
    {
        strcpy(resultado, "N�o requerer aposentadoria!!");
    }

    printf("c�digo do funcion�rio : %d \n", codigo);
    printf("idade: %d \n", idade);
    printf("tempo de trabalho: %d \n", tempotrabalho);
    printf("resultado da consulta : %s \n", resultado);
    return 0;
}