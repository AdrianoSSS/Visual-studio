#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero1;
    int numero2;
    char operacoes;
    float resultado;

    // solicitando dados
    printf("Escolha o primeiro n�mero : \n");
    scanf("%d", &numero1);
    system("cls || clear");

    printf("Escolha o segundo n�mero : \n");
    scanf("%d", &numero2);
    system("cls || clear");

    printf(" + | SOMA\n");
    printf(" - |  SUBTRA��O\n");
    printf(" * |  MULTIPLICA��O\n");
    printf(" / |  DIVIS�O\n");

    fflush(stdin);
    printf("digite a opera��o desejada: ");
    scanf("%c", &operacoes);
    system("cls || clear");

    // finalizando dados

    switch (operacoes)
    {
    case '+':
        printf("Oper��o : SOMA\n");
        resultado = numero1 + numero2;
        printf("Resultado : %f \n", resultado);
        break;

    case '-':
        printf("Oper��o : SUBTRA��O\n");
        resultado = numero1 - numero2;
        printf("Resultado : %f \n", resultado);
        break;

    case '*':
        printf("Oper��o : MULTIPLICA��O\n");
        resultado = numero1 * numero2;
        printf("Resultado : %f \n", resultado);
        break;

    case '/':
        printf("Oper��o : DIVIS�O\n");
        resultado = numero1 / numero2;
        printf("Resultado : %f \n", resultado);
        break;

    default:
        printf("op��o ivalida!!. \n");
        break;
    }
    return 0;
}
