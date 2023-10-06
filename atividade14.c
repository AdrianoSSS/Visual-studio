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
    printf("Escolha o primeiro número : \n");
    scanf("%d", &numero1);
    system("cls || clear");

    printf("Escolha o segundo número : \n");
    scanf("%d", &numero2);
    system("cls || clear");

    printf(" + | SOMA\n");
    printf(" - |  SUBTRAÇÃO\n");
    printf(" * |  MULTIPLICAÇÃO\n");
    printf(" / |  DIVISÃO\n");

    fflush(stdin);
    printf("digite a operação desejada: ");
    scanf("%c", &operacoes);
    system("cls || clear");

    // finalizando dados

    switch (operacoes)
    {
    case '+':
        printf("Operção : SOMA\n");
        resultado = numero1 + numero2;
        printf("Resultado : %f \n", resultado);
        break;

    case '-':
        printf("Operção : SUBTRAÇÃO\n");
        resultado = numero1 - numero2;
        printf("Resultado : %f \n", resultado);
        break;

    case '*':
        printf("Operção : MULTIPLICAÇÃO\n");
        resultado = numero1 * numero2;
        printf("Resultado : %f \n", resultado);
        break;

    case '/':
        printf("Operção : DIVISÃO\n");
        resultado = numero1 / numero2;
        printf("Resultado : %f \n", resultado);
        break;

    default:
        printf("opção ivalida!!. \n");
        break;
    }
    return 0;
}
