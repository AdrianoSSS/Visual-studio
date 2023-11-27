#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct ficha_aluno
    {
        char nome[200];
        int idade;
        int soma;
        float notas[2];
        float media[2];
    };
    struct ficha_aluno aluno[3];
    int i;
    int j = 0;

    for (i = 0; i < 3; i++)
    {
        printf("digite o nome do aluno : \n");
        scanf("%s", aluno[i].nome);

        printf("digite a idade do aluno : \n");
        scanf("%d", &aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf("digite a  %d° nota do aluno : \n", j + 1);
            scanf("%f", &aluno[i].notas[j]);
       
        }
        fflush(stdin);
        soma += notas[j];
        media[j] = soma / 2;
        system("cls || clear");
    }

    system("cls || clear");

    printf("\nExibindo os dados do aluno ...\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("nome do aluno : %s \n", aluno[i].nome);
        printf("idade do aluno : %d \n", aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf("notas do aluno : %f \n", aluno[i].notas[j]);
            printf("media do aluno : %f \n", aluno[i].media[j]);
        }
    }

    return 0;
}
