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
        printf("digite um %d� n�mero :\n ", quantidadegeral + 1);
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

    printf("N�meros pares : %d \n ", par);
    printf("N�meros impares : %d \n ", impar);
    printf("M�dia par : %f \n", mediapar);
    printf("M�dia geral : %f \n", mediageral);
    return 0;
}
