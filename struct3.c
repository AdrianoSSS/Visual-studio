#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    struct ficha_livro
    {
        char nome[200];
        char autor[200];
        char categoria[200];
        float preco;
    };
     struct ficha_livro livro[5];
     int i;
    for (i = 0; i < 5; i++) 
    {
    printf("digite o nome do livro : \n");
    scanf("%s", livro[i].nome);

    printf("digite o nome do autor: \n");
    scanf("%s", &livro[i].autor);

    printf("digite a categoria do livro : \n");
    scanf("%s", &livro[i].categoria);

    printf("digite o preço do livro : \n");
    scanf("%f", &livro[i].preco);
    system("cls || clear");
    }

    system("cls || clear");

    printf("\nExibindo os dados do livro ...\n\n");
        for (i = 0; i < 5; i++) 
    {
    printf("nome do livro : %s \n", livro[i].nome);
    printf("nome do autor : %s \n", livro[i].autor);
    printf("categoria do livro : %s \n", livro[i].categoria);
    printf("preço do livro : %.2f$ \n", livro[i].preco);
    }

    return 0;
}