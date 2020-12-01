#include <stdio.h>
#include <string.h>

int main()
{

    char seq[80];
    int tam, i;

    printf("Coloque uma sequencia de até 80 caracteres:\n");

    scanf("%[^\n]s", seq);

    tam = strlen(seq);

    for (i = tam; i > -1; i--)
    {

        printf("%c", seq[i]);
    }

    printf("\n");

    return 0;
}