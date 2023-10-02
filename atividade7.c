#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade = 0;
    setlocale(LC_ALL, "portuguese");
    // solicitando dados

    printf("digite sua idade :");
    scanf("%d", &idade);

    system("cls || clear");
    fflush(stdin);

    // checando dados
    printf("idade : %d \n", idade);

    if (idade < 18 || idade > 65)
        {

            printf("Não é obrigado a votar!!");
        }
    else
    {
        printf("É obrigado a votar !!");
    }
    return 0;
}