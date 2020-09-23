#include <stdio.h>

int main()
{
    int H, Min, segs1, segs2;

    printf("\nConfigure o relogio\n00:00:00\n");
    scanf("%d", &segs1);
    H = segs1 / 3600;
    Min = (segs1 % 3600) / 60;
    segs2 = (segs1 % 3600) % 60;
    printf("%d:%d:%d\n", H, Min, segs2);

    return 0;
}