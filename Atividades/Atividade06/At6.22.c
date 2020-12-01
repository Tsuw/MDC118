#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 typedef struct
    {

        char nome[30];
        int tel;

    } c;

int main()
{

    int i, tam;

    printf("Digite o tamanho da lista: ");
    scanf("%d", &tam);
    printf("\n");

    c v[tam];

    for (i = 0; i < tam; i++)
    {


        printf("Contato Nº%d\n", i + 1);
        printf("Digite o nome: ");
        scanf("%s", v[i].nome);
        printf("Digite o telefone: ");
        scanf("%d", &v[i].tel);

        printf("\n");
    }

    printf("\nLista de contatos:\n\n");

    for(i = 0; i < tam; i++){

        printf("Contato Nº%d\n", i + 1);
        printf("Nome: %s\n", v[i].nome);
        printf("Telefone: %d\n\n", v[i].tel);

    }

    return 0;
}
