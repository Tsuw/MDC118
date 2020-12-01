#include <stdio.h>

int main()
{

    int ano;

    printf("Qual ano?\n");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
    {

        printf("È bissexto.\n");
    }
    else
    {
        printf("Não é bissexto.\n");
    }

    return 0;
}