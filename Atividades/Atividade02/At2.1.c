#include <stdio.h>

int main()
{
    int x, y;
    printf("\nSelecione um numero qualquer:\n");
    scanf("%d", &x);

    y = x % 2;

    if (y != 0)
    {
        printf("É ímpar!\n");
    }
    else
    {
        printf("É par!\n");
    };

    return 0;
}