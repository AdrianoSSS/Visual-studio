#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int numeros[5];
    int par=0;
    int impar=0;
    int positivos=0;
    int maiornumero;
    int menornumero = 999999999;
    int negativos=0;
    int somageral;
    float mediageral;
    float mediapar;
    float mediaimpar;
    int somaP=0;

    for (i = 0; i < 5; i++)
    {
        printf("numeros %d : \n", i + 1);
        scanf("%d", &numeros[i]);

        somageral += numeros[i];

        maiornumero = maiornumero > numeros[i] ? maiornumero : numeros[i];
        menornumero = menornumero < numeros[i] ? menornumero : numeros[i];
        if (numeros[i] % 2 == 0)
        {
            par++;
            mediapar = somageral / par;
            numeros[i] < 0 ? negativos++ : (somaP += numeros[i]);
            numeros[i] > 0 ? positivos++ : (somaP += numeros[i]);
        }

        else
        {
            impar++;
            mediaimpar = somageral / impar;
            numeros[i] < 0 ? negativos++ : (somaP += numeros[i]);
            numeros[i] > 0 ? positivos++ : (somaP += numeros[i]);
        }
    }
    mediageral = somageral / 5;

    system("cls || clear ");

    for (i = 4; i >= 0; i--)
    {
        printf("numeros %d : %d\n", i+1, numeros[i]);
    }
    printf("Pares : %d \n", par);
    printf("impares : %d \n", impar);
    printf("Positivos : %d \n", positivos);
    printf("Negativos : %d \n", negativos);
    printf("Maior numero: %d \n", maiornumero);
    printf("Menor numero: %d \n", menornumero);
    printf("media geral : %.1f \n", mediageral);
    printf("media par : %.1f \n", mediapar);
    printf("media impar : %.1f \n", mediaimpar);
    return 0;
}
