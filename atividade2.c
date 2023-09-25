#include <stdio.h>
#include <stdlib.H>

int main()
{
    int idade = 0;
    float peso = 0;
    char sexo;
    char nome[250];
    // solicitando dados do usuário.
    printf("digite sua idade :");
    scanf("%d", &idade);

    printf("digite seu peso : ");
    scanf("%f", &peso);

    fflush(stdin); // limpar o cache de input.

    printf("digite seu sexo : ");
    scanf("%c", &sexo);

    fflush(stdin);

    printf("digite seu nome : ");
    // scanf("%s", &nome);
    // fgets(nome,250,stdin);
    // gets(nome);
    // nome[strcspn(nome, "\n")] = 0;

    // limpa a tela (limpa o terminal)
    system("cls || clear"); //clear pra windows e clear linux e junto pra tudo

    // exibindo dados do usuário.

    printf("idade : %d \n", idade);
    printf("peso : %.2f \n", peso);
    printf("sexo :%c \n", sexo);
    printf("nome : %s \n", nome);

    return 0;
}