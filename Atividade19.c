#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int nota;
    int soma = 0;

    for (i = 1; i <= 2; i++)
    {

        do
        {

            printf("digite a %d° nota : ", i);
            scanf("%d", &nota );
            system("cls || clear");
            fflush(stdin);
            if(nota < 0 || nota > 10){
            printf("Nota inválida ! \nDigite a nota novamente!!\n\n");
            }

        } while (nota < 0 || nota > 10);
        soma += nota;
    }
    //{
    // printf("digite a nota do aluno : ");
    // scanf("%f", &nota);
    // }
    printf("nota : %d \n", nota);

    return 0;
}
