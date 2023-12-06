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
    int i, par = 0;
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 0)
        {
            par++;
        }
    }
    printf("\nPar : %d", par);  
}

void class(int numero[])
{
    int i, impar = 0;
    for (i = 0; i < 6; i++)
    {
        if (numero[i] % 2 == 1)
        {
            impar++;
        }
    }
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
    class(numero);

    return 0;
}