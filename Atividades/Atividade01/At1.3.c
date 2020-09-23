#include <stdio.h>

int main(){
    long long int Giga;

    printf("\nDiga o quanto de Giga\n");
    scanf("%lld", & Giga);
    printf("%lldB\n", Giga * 1024 * 1024 * 1024);

    return 0;
}