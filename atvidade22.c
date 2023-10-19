#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    int quantidadegeral = 0;
    int par = 0;
    int impar = 0;
    int somapar = 0;
    int somageral = 0;
    float mediapar;
    float mediageral;

    do
    {
        printf("digite um %d° número :\n ", quantidadegeral + 1);
        scanf("%d", &numero);

        if (numero > 0)
        {
            somageral += numero;
            quantidadegeral++;
        }

        if (numero % 2 == 0)
        {
            somapar += numero;
            par++;
        }
        else
        {
            impar++;
        }
        mediageral = somageral / (float)quantidadegeral;
        mediapar = somapar / (float)par;

    } while (numero != 0);

    printf("Números pares : %d \n ", par);
    printf("Números impares : %d \n ", impar);
    printf("Média par : %f \n", mediapar);
    printf("Média geral : %f \n", mediageral);
    return 0;
}
