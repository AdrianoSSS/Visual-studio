#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char escolha;
    float preco;
    float parcela;
    float resultado;

    // solicitando dados

    printf(" V | À VISTA\n");
    printf(" P |  PARCELADO\n");

    printf("Escolha a forma de pagamento desejada: ");
    scanf("%c", &escolha);
    system("cls || clear");
    fflush(stdin);
    // finalizando dados
    preco = 100;

    switch (escolha)
    {
    case 'v':
        printf("PAGAMENTO :Á VISTA\n");
        resultado = preco * 90 / 100;
        printf("Valor : %f \n", resultado);
        break;
        system("cls || clear");
        fflush(stdin);
        
    case 'p':
        printf("escolha a quantidade de parcela : ");
        scanf("%f", &parcela);
        system("cls || clear");
       

        if (parcela > 6 || parcela <= 0)
        {
            printf("Pagamento não pode ser efetuado\n");
            break;
        }
        else if (parcela >= 1 && parcela <= 6)
            printf("PAGAMENTO : PARCELADO \n");
       
        resultado = preco / parcela;
        printf("Valor : %f \n", resultado);
        break;
        system("cls || clear");

    default:
        printf("Tipo de pagamento invalido!! \n");
        break;
    }
    return 0;
}
