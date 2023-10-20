#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota ;
    char  escolha;
    float quantidadenota = 0;
    int contadorloops = 0 ;
    float somanota;
    float medianota = 0;

    do
    {
        printf("-----DESEJA CALCULAR UMA NOTA ?-----");
        Printf(" S || SIM");
        Printf(" N || NÃO");
        Printf("Digite sua escolha :");
        scanf("%c", &escolha);

        

        switch (escolha)
        {
        case 'S':
            
            Printf("digite uma nota : ", quantidadenota + 1);
            scanf("%f",%nota);

            somanota += nota;
            medianota = nota / quantidadenota;
            if
        
            break;
        
        default:
            break;
        }

        
    } while (nota != 'N');
    return 0;
}
