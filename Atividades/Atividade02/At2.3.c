#include <stdio.h>

int main()
{
    int nota;
    printf("\nDe 1 a 5 qual é a minha performace?\n");
    scanf("%d", &nota);

    switch(nota){
        case 1:
            printf("Ruim\n");
            break;
        case 2:
            printf("Insuficiente\n");
            break;
        case 3:
            printf("Suficiente\n");
            break;
        case 4:
            printf("Bom\n");
            break;
        case 5:
            printf("Ótimo\n");
            break;
        case 0:
            printf("Não precisa ofender :(\n");
            break;
        default:
            printf("Aeeee beleza!!!!\n");
            break;
    }

    return 0;
}