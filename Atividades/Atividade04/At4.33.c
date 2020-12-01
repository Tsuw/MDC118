#include <stdio.h>
#include <ctype.h>

int main()
{

    char t;

    printf("Digite uma tecla:\n");
    scanf("%c", &t);

    if (isalpha(t))
    {
        printf("É letra.\n");
    }
    else
    {
        if (isdigit(t))
        {
            printf("É número.\n");
        }
        else
        {
            printf("É caracter especial.\n");
        }
    }

    return 0;
}