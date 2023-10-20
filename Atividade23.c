#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int sexo;
    int codigo;
    int maioridade;
    int menoridade;
    int idade;
    int quantidadegeral = 0;
    int contadorsalario;
    int mulheres5k = 0;
    float salario = 0;
    float somasalario;
    float mediasalarial = 0;

    do
    {

        printf("~~~~~~~~~~~~MENU~~~~~~~~~~~~\n");
        printf("\n");
        printf("|CODÍGO |  |  DESCRIÇÃO| \n");
        printf("| 1   \t|  | ADCIONAR PESSOA|\n");
        printf("| 2   \t|  |SAIR E EXIBIR RESULTADOS|\n");
        printf("\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\n");

        printf("Escolha uma das opções a cima ^ :  \n");
        scanf("%d", &codigo);
        system("cls || clear");
        fflush(stdin);

        switch (codigo)
        {
        case 1:

            printf("Informe sua idade : \n");
            scanf("%d", &idade);

            printf("Informe seu salarío : \n");
            scanf("%f", &salario);

            fflush(stdin);

            printf("\n----------------\n");
            printf("\n");
            printf("M | MASCULINO \n");
            printf("F | FEMININO \n ");
            printf("\n----------------\n");
            printf("Informe seu sexo :\n");
            scanf("%c", &sexo);
            sexo = toupper(sexo);

            contadorsalario++;
            somasalario += salario;

            maioridade = maioridade > idade ? maioridade : idade;
            menoridade = menoridade < idade ? menoridade : idade;

            if (sexo == 'F' && salario >= 5000)

                mulheres5k++;

            system("cls || clear");
            break;

        case 2:
            system("cls || clear");

            mediasalarial = somasalario / contadorsalario;

            printf("~~~~~~~~resultado da pesquisa~~~~~~~~\n\n");
            printf("Média salarial: %.2f \n", mediasalarial);
            printf("Quantidade de mulheres que ganham mais de 5 mil: %d \n", mulheres5k);
            printf("Maior idade: %d \n", maioridade);
            printf("Menor idade: %d \n", menoridade);
            break;
        default:
            printf("Opção inválida!");
            sleep(3);
            system("cls || clear");
        }
    } while (codigo != 2);
    return 0;
}
