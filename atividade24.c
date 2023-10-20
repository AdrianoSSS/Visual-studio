#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char loginsalvo[200] = "AdrianoSSS";
    char senhasalva[200] = "123456789";
    char login[200];
    char senha[200];

    do
    {

        printf("Digite seu login : ");
        gets(login);

        printf("digite sua senha : ");
        gets(senha);
        
        if (strcmp(login,loginsalvo) == 0 && strcmp(senha, senhasalva) == 0)
        {
        printf("Bem-Vindo! \n");
        }
        else
        {
        printf("Acesso negado!\n\n");
        }
    } while (strcmp(login, loginsalvo) !=0 || strcmp(senha, senhasalva) !=0);
    return 0;
}
