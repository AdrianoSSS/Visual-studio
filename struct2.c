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
        float notas[2];
        float media;
       
    };
    struct ficha_aluno aluno[3];
    int i=0;
    int j = 0;
    float soma =0;

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
            soma += aluno[i].notas[j];
        }
        
        aluno[i].media = soma / j;
        fflush(stdin);
        system("cls || clear");
    }

    system("cls || clear");

    printf("\nExibindo os dados do aluno ...\n\n");
    for (i = 0; i < 3; i++)
    {
    	printf("%d° Aluno \n", i+1);
        printf("nome do aluno : %s \n", aluno[i].nome);
        printf("idade do aluno : %d \n", aluno[i].idade);
        for (j = 0; j < 2; j++)
        {
            printf("%d° nota : %f \n",j+1,aluno[i].notas[j]);
        }
        printf("media do aluno : %f \n", aluno[i].media);
          printf("\n\n");
    }

    return 0;
}
