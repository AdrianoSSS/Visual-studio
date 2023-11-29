#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct ficha_informacoes
    {
        char nome[200];
        int datadenascimento;
        int RG;
        int CPF;
    };
     struct ficha_informacoes informacoes[5];
     int i=0;
    for (i = 0; i < 5; i++) 
    {
    printf("%d°\n",i+1);
    printf("digite o nome da pessoa: \n");
    scanf("%s", informacoes[i].nome);

    printf("digite a data de nascimento: \n");
    scanf("%s", &informacoes[i].datadenascimento);

    printf("digite o RG  : \n");
    scanf("%s", &informacoes[i].RG);

    printf("digite o CPF : \n");
    scanf("%f", &informacoes[i].CPF);
    system("cls || clear");
    fflush(stdin);
    }

    system("cls || clear");

    printf("\nExibindo os dados do informacoes ...\n\n");
        for (i = 0; i < 5; i++) 
    {
    printf("%d°\n",i+1);
    printf("nome : %s \n",informacoes[i].nome);
    printf("data de nascimento : %d \n",informacoes[i].datadenascimento);
    printf("RG : %d \n",informacoes[i].RG);
    printf("CPF : %d \n",informacoes[i].CPF);
    printf("\n\n");
    }

    return 0;
}
