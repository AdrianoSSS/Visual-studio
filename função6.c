#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

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

void clas(int numero[])
{
    int i, par = 0, impar = 0;
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("\nPar : %d", par);
    printf("\nimpar : %d", impar);
}

int main()
{
    int numero[6];
    int i;

    cabecalho();
    for (i = 0; i < 6; i++)
    {
        printf("numeros %d : \n", i + 1);
        scanf("%d", &numero[i]);
    }
    fflush(stdin);
    limpartela();

    cabecalho();
    for (i = 0; i < 6; i++)
    {
        printf("numeros %d : %d\n", i + 1, numero[i]);
    }
    clas(numero);

    return 0;
}