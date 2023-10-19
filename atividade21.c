#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero;
    int soma = 0;
    int contador = 0;
    float media;

    do
    {
        printf("digite um número : ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            soma += numero;
            contador++;
        }
    } while (numero > 0);

    media = soma / contador;
    printf("média : %.1f \n", media);

    return 0;
}