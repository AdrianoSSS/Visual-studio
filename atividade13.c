#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    // solicitando dados
    printf("|~~~~~~~~~~~~MENU~~~~~~~~~~~~| \n");
    printf("Cod�go \t Prato \t Pre�o \n");
    printf(" 1 |  PICANHA   | 25,00$ \n");
    printf(" 2 |  LASANHA   | 20,00$ \n");
    printf(" 3 |  STROGONOFF   | 18,00$ \n");
    printf(" 4 |  BIFE A�EBOLADO  | 15,00$ \n");
    printf(" 5 | P�O COM OVO   | 5,00$ \n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n");
    printf("\n");
    printf("Escolha uma das op��es a cima ^ : \n");
    scanf("%d", &codigo);
    system("cls || clear");

    // finalizando dados

    switch (codigo)
    {
    case 1:
        printf("Cod�go : %d \n", codigo);
        printf("Prato : PICANHA.\n");
        printf("Pre�o : 25,00$. \n");
        break;
    case 2:
        printf("Cod�go : %d \n", codigo);
        printf("Prato : LASANHA. \n");
        printf("Pre�o : 20,00$. \n");
        break;

    case 3:
        printf("Cod�go : %d \n", codigo);
        printf("Prato : STROGONOFF. \n");
        printf("Pre�o : 18,00$. \n");
        break;

    case 4:
        printf("Cod�go : %d \n", codigo);
        printf("Prato :  BIFE A�EBOLADO. \n");
        printf("Pre�o : 15,00$. \n");
        break;

    case 5:
        printf("Cod�go : %d \n", codigo);
        printf("Prato : P�O COM OVO. \n");
        printf("Pre�o : 5,00$. \n");
        break;
    default:
        printf("op��o ivalida!!. \n");
        break;
    }
    return 0;
}
