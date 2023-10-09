#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char sexo;
    float altura;
    float peso;
    float pesofinal;

    // soliciando dados

    printf("M | MASCULINO\n");
    printf("F | FEMININO\n");

    printf("Qual seu sexo: ");
    scanf("%c", &sexo);
    system("cls || clear");
    fflush(stdin);

    //finalizando

    switch (sexo)
    {
    case 'M':
        printf("seu peso : ");
        scanf("%f", &peso);
        fflush(stdin);

        printf("seu altura : ");
        scanf("%f", &altura);
        fflush(stdin);
        system("cls || clear");

        pesofinal = (peso * altura) - 58;
        printf("Sexo : %c \n", sexo);
        printf("Altura : %f \n", altura);
        printf("Peso : %f \n", peso);
        printf("Peso final : %f \n", pesofinal);
        break;

    case 'F':

        printf("seu peso : ");
        scanf("%f", &peso);
        fflush(stdin);

        printf("seu altura : ");
        scanf("%f", &altura);
        fflush(stdin);
        system("cls || clear");

        pesofinal = (peso * altura) - 44.7;
         printf("Sexo : %c \n", sexo);
        printf("Altura : %f \n", altura);
        printf("Peso : %f \n", peso);
        printf("Peso final : %f \n", pesofinal);
        break;

    default:
        printf("TA QUERENDO INVENTAR MODA É !! \n");
        break;
    }

    return 0;
}
