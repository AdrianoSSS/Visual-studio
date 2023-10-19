#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int nota;
    int soma = 0;
    float media;

    for (i = 1; i <= 3; i++)
    {
        do
        {
            printf("digite a %d° nota : \n", i);
            scanf("%d", &nota);
        } while (nota < 0 || nota > 10);

        soma += nota;
        media = soma / 3;
        fflush(stdin);
        system("cls || clear");
    }

    if (media >= 7)
    {
        printf("Aluno Aprovado!!\n");
        printf("média :%f\n", media);
        fflush(stdin);
    }
    else if (media >= 5)
    {
        printf("Aluno Em Recuperação!!\n");
        printf("média :%f\n", media);
        fflush(stdin);
    }
    else
    {
        printf("Aluno Reprovado\n");
        printf("média :%f\n", media);
        fflush(stdin);
    }
    return 0;
}