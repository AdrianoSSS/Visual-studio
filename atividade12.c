#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int dia;

    // solicitando dados
    printf("Digite um num�ro para saber o dia : ");
    scanf("%d", &dia);
    system("cls || clear");

    // calculando dados
    printf("Dia : %d \n", dia);

    switch (dia)
    {
    case 1:
        printf("Domingo . \n");
        printf("Final de Semana. \n");
        break;
    case 2:
        printf("Segunda. \n");
        printf("Dia �til. \n");

        break;

    case 3:
        printf("Ter�a. \n");
        printf("Dia �til. \n");
        break;

    case 4:
        printf("Quarta. \n");
        printf("Dia �til. \n");
        break;

    case 5:
        printf("Quinta. \n");
        printf("Dia �til. \n");
        break;

    case 6:
        printf("Sexta. \n");
        printf("Dia �til. \n");
        break;

    case 7:
        printf("Sabado. \n");
        printf("Final de Semana. \n");
        break;

    default:
        printf("Op��o ivalida!!. \n");
        break;
    }
    return 0;
}