#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int numero1;
    int numero2;
    int soma;
    float media;
    float produto;
    float maior;
    float menor;

    // solicitando dados
    printf("digite o primeiro número :");
    scanf("%d", &numero1);
    printf("digite o segundo número :");
    scanf("%d", &numero2);
    system("cls || clear");
    fflush(stdin);

    // calculando dados
    soma = (numero1 + numero2);
    media = (numero1 + numero2) / 2;
    produto = (numero1 * numero2);
    maior = numero1 > numero2 ? numero1 : numero2;
    menor = numero1 < numero2 ? numero1 : numero2;

    // exibindo dados
    printf("primeiro número: %d \n", numero1);
    printf("segundo número: %d \n", numero2);
    printf("soma: %d \n", soma);
    printf("produto  : %f \n", produto);
    printf("Média total  : %f \n", media);

    if (numero1 > numero2)
    {
        maior = (numero1);
        menor = (numero2);
     printf("maior : %f \n", maior);
     printf("menor : %f \n", menor);
    }
    else if(numero2 > numero1)
    {
        maior = (numero2);
        menor = (numero1);
        printf("maior : %f \n", maior);
      printf("menor : %f \n", menor);
    }
    else if (numero1 == numero2)
    {
        printf("Os números são iguaís");
    }
    return 0;
}
