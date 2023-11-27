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
        float peso;
        float altura;
    };
     struct ficha_aluno aluno[5];
     int i;
    for (i = 0; i < 5; i++) 
    {
    printf("digite o nome do aluno : \n");
    scanf("%s", aluno[i].nome);

    printf("digite a idade do aluno : \n");
    scanf("%d", &aluno[i].idade);

    printf("digite o peso do aluno : \n");
    scanf("%f", &aluno[i].peso);

    printf("digite a altura do aluno : \n");
    scanf("%f", &aluno[i].altura);
    system("cls || clear");
    }

    system("cls || clear");

    printf("\nExibindo os dados do aluno ...\n\n");
        for (i = 0; i < 5; i++) 
    {
    printf("nome do aluno : %s \n", aluno[i].nome);
    printf("idade do aluno : %d \n", aluno[i].idade);
    printf("peso do aluno : %.2f KG\n", aluno[i].peso);
    printf("altura do aluno : %.2f M \n", aluno[i].altura);
    }

    return 0;
}
