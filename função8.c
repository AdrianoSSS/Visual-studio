#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

// #define TAM 2
void cabecalho()
{
    printf("\n====================================\n");
    printf("\tSENAI-BA\n");
    printf("====================================\n");
}
void limpartela()
{
    system("cls || clear");
}

int soma(int numero1, int numero2)
{
    int soma = 0;
    soma = numero1 + numero2;
    printf("\nsoma : %d", soma);
}

int subtracao(int numero1, int numero2)
{
    int subtracao = 0;
    subtracao = numero1 - numero2;
    printf("\nsubtração : %d", subtracao);
}

float multiplicacao(int numero1, int numero2)
{
    float multiplicacao = 0;
    multiplicacao = numero1 * numero2;
    printf("\nmultiplicação : %.1f", multiplicacao);
}

float divisao(int numero1, int numero2)
{
    float divisao;
    divisao = numero1 / numero2;
    printf("\ndivisão : %.1f", divisao);
}

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero1;
    int numero2;

    cabecalho();

    printf("numero 1 : \n");
    scanf("%d", &numero1);

    printf("numero 2 : \n");
    scanf("%d", &numero2);
    
    fflush(stdin);
    limpartela();

    cabecalho();

    printf("primeiro numero: %d\n",numero1);
    printf("segundo numero : %d\n",numero2);
   
    soma(numero1,numero2);
    subtracao(numero1,numero2);
    multiplicacao(numero1,numero2);
    divisao(numero1,numero2);

    return 0;
}