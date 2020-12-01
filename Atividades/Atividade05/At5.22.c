#include <stdio.h>

int main()
{

    long int matriz[7][2] = {{1111, 30001000}, {2222, 30002000}, {3333, 30003000}, {4444, 30004000}, {5555, 30005000}, {6666, 30006000}, {7777, 30007000}};
    int m, codigo, i, tentayva = 0;

    while (tentayva != 3 && tentayva < 30)
    {
        printf("Insira o código de acesso:");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1412:
            printf("Bem vindo Administrador!\n");
            printf("Insira a matrícula:");
            scanf("%d", &m);
            for (i = 0; i < 7; i++)
            {
                if (m == matriz[i][0])
                {
                    printf("%ld\n", matriz[i][1]);
                    tentayva = tentayva + 40;
                    break;
                }
            }
            if (m != matriz[i][0])
            {
                printf("Matícula inválida\n");
            }
            break;

        default:
            printf("Código inválido\n");
        }

        tentayva++;
    }

    return 0;
}