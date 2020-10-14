#include <stdio.h>

int main()
{

    for (int n = 0; n < 101; n++)
    {

        if (n % 3 == 0)
        {
            printf("%d\n", n);
        }
        else
        {
            continue;
        };
    };
    return 0;
}