#include <stdio.h>

int main()
{

    int n, r, ni;

    printf("Fatorial de:");
    scanf("%d", &n);

    ni = n;

    switch (n)
    {
    case 0:
        break;
    case 1:
        break;
    default:
        while (n > 1) //0 NÃO É MAIOR QUE 0!!!
        {
            --n;

            r = ni * n;

            ni = r;
        }
    }

    switch (ni)
    {
    case 0:
        printf("1\n");
        break;
    case 1:
        printf("1\n");
        break;
    default:
        printf("%d\n", r);
    }

    return 0;
}