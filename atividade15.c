#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char escolha;
    float preco;
    int parcela;
    float resultado;
    float desconto;

    // solicitando dados

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    fflush(stdin);
    system("cls || clear");

    printf(" V | À VISTA\n");
    printf(" P |  PARCELADO\n");

    printf("Escolha a forma de pagamento desejada: ");
    scanf("%c", &escolha);
    system("cls || clear");
    fflush(stdin);

    // finalizando dados

    switch (escolha)
    {
    case 'V':
        printf("PAGAMENTO :À VISTA\n");
        resultado = preco * 90 / 100;
        desconto = preco * 0.1;
        printf("Valor : %f \n", resultado);
        printf("Desconto : %f \n", desconto);
        break;
        system("cls || clear");
        fflush(stdin);

    case 'P':
        printf("escolha a quantidade de parcela : ");
        scanf("%d", &parcela);
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
        printf("Parcelas : %d \n", parcela);
        break;
        system("cls || clear");

    default:
        printf("Tipo de pagamento invalido!! \n");
        break;
    }
    return 0;
}
