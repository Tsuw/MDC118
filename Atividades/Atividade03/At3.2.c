#include <stdio.h>

int main()
{

    int ant = 1;
    int pro = 0;
    int res;
    unsigned int n;

    printf("Quantas vezes você quer que a sequência aconteça?\n");
    scanf("%ud", &n);

    for (int ni = 0; ni <= n; ni++)
    {

        res = ant + pro;

        printf("%d\n", res);

        ant = pro;
        pro = res;
        
    }
    return 0;
}