#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{

    setlocale(LC_ALL, "portuguese");
    char loginsalvo[250] = "oliver";
    char senhasalva[250] = "987456";
    char login[250];
    char senha[250];

    printf("digite seu login: ");
    gets(login);

    printf("digite sua senha : ");
    gets(senha);

    if (strcmp(login,loginsalvo) == 0 && strcmp(senha,senhasalva) == 0)
    {
        printf("Seja Bem-Vindo!!");
    }
    else
    {
        printf("Acesso Negado!!");
    }
    return 0;
}