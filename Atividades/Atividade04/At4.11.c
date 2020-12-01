#include <stdio.h>

int main()
{

    int n1, n2;
    int n = 0;

    printf("Primeiro número:");
    scanf("%d", &n1);
    printf("Segundo número:");
    scanf("%d", &n2);

    while(n1 != 0 && n2 != 0){
        n1--;
        n2--;
        n++;
    }

    if(n1 == 0){
        printf("O menor número é:%d\n", n);
    }
    else{
        printf("O menor número é:%d\n", n);

    }

    return 0;
}