#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero1;
    int numero2;
    int numero3;
    int maior;
    int menor;

    // solicitando dados
    printf("digite o primeiro número :");
    scanf("%d", &numero1);
    printf("digite o segundo número :");
    scanf("%d", &numero2);
    printf("digite o terceiro número :");
    scanf("%d", &numero3);

    system("cls || clear");
    fflush(stdin);

    // calculando

    // exibindo dados
    printf("primeiro número: %d \n", numero1);
    printf("segundo número: %d \n", numero2);
    printf("terceiro número: %d \n", numero3);

    if ((numero1 > numero2) && (numero1 > numero3))
    {
        maior = numero1;

        if (numero2 > numero3)
        {
            menor = numero3;
        }
        else
        {
            menor = numero2;
        }
    }

    if ((numero2 > numero1) && (numero2 > numero3))
    {
        maior = numero2;

        if (numero1 > numero3)
        {
            menor = numero3;
        }
        else
        {
            menor = numero1;
        }
    }
    if ((numero3 > numero1) && (numero3 > numero2))
    {
        maior = numero3;

        if (numero1 > numero2)
        {
            menor = numero1;
        }
        else
        {
            menor = numero2;
        }
    }


    //maior = numero1 > numero2 ? numero1 : numero2;
   //maior = maior > numero3 ? maior : numero3;
    //menor = numero1 < numero2 ? numero1 : numero2;
    //menor = menor < numero3 ? menor : numero3;

    printf("Maior : %d \n", maior);
    printf("Menor : %d \n", menor);

    return 0;
}
