#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int maca;
    float descontodamaca;
    float precodamaca;
    float valorfinal;
    float valorfinal2;
    // solicitando dados
    printf("digite o numero de ma��s :");
    scanf("%i", &maca);

    system("cls || clear");
    fflush(stdin);
    // calculando dados
    descontodamaca = 1.00;
    precodamaca = 1.30;
    valorfinal = maca * descontodamaca;
    valorfinal2 = maca * precodamaca;
    // finalizando dados
    if (maca < 12)
    {
        printf ("Pre�o :%f", valorfinal2);
    }
    else if (maca >= 12)
    {
        printf("Pre�o :%f", valorfinal);
    }
    return 0;
}