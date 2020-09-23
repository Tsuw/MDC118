#include <stdio.h>

int main()
{

    float n, d, r;

    printf("\nSelecione o valor:\n");
    scanf("%f", &n);

    if (0 <= n && n <= 100)
    {
        d = n * 0.01;
        r = n - d;
        printf("%.2f\n", r);
    }
    else
    {
        if (n >= 100.01 && n <= 500)
        {
            d = n * 0.05;
            r = n - d;
            printf("%.2f\n", r);
        }

        else
        {
            d = n * 0.1;
            r = n - d;
            printf("%.2f\n", r);
        }
    };

    return 0;
}