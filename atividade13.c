#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    // solicitando dados
    printf("|~~~~~~~~~~~~MENU~~~~~~~~~~~~| \n");
    printf("Codígo \t Prato \t Preço \n");
    printf(" 1 |  PICANHA   | 25,00$ \n");
    printf(" 2 |  LASANHA   | 20,00$ \n");
    printf(" 3 |  STROGONOFF   | 18,00$ \n");
    printf(" 4 |  BIFE AÇEBOLADO  | 15,00$ \n");
    printf(" 5 | PÃO COM OVO   | 5,00$ \n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| \n");
    printf("\n");
    printf("Escolha uma das opções a cima ^ : \n");
    scanf("%d", &codigo);
    system("cls || clear");

    // finalizando dados

    switch (codigo)
    {
    case 1:
        printf("Codígo : %d \n", codigo);
        printf("Prato : PICANHA.\n");
        printf("Preço : 25,00$. \n");
        break;
    case 2:
        printf("Codígo : %d \n", codigo);
        printf("Prato : LASANHA. \n");
        printf("Preço : 20,00$. \n");
        break;

    case 3:
        printf("Codígo : %d \n", codigo);
        printf("Prato : STROGONOFF. \n");
        printf("Preço : 18,00$. \n");
        break;

    case 4:
        printf("Codígo : %d \n", codigo);
        printf("Prato :  BIFE AÇEBOLADO. \n");
        printf("Preço : 15,00$. \n");
        break;

    case 5:
        printf("Codígo : %d \n", codigo);
        printf("Prato : PÃO COM OVO. \n");
        printf("Preço : 5,00$. \n");
        break;
    default:
        printf("opção ivalida!!. \n");
        break;
    }
    return 0;
}
