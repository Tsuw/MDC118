#include <stdio.h>

int main()
{

    int p;

    struct calendario
    {
        unsigned int dia, mes;
        int ano;
    };

    struct calendario c;

    printf("Selecione o país: 1 = BR, 2 = US\n");
    scanf("%d", &p);

    switch (p)
    {

    case 1:

        printf("Selecione um dia: ");
        scanf("%ud", &c.dia);
        printf("Selecione um mês: ");
        scanf("%ud", &c.mes);
        printf("Selecione um ano: ");
        scanf("%d", &c.ano);

        switch (c.mes)
        {

        case 1:
        case 3:
        case 7:
        case 8:
        case 10:
        case 12:

            if (c.dia > 0 && c.dia <= 31)
            {
                printf("A data é:\n%u/%u/%d\n", c.dia, c.mes, c.ano);
            }
            else
            {
                printf("Dia invalido\n");
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:

            if (c.dia > 0 && c.dia <= 30)
            {
                printf("A data é:\n%u/%u/%d\n", c.dia, c.mes, c.ano);
            }
            else
            {
                printf("Dia invalido\n");
            }
            break;

        case 2:

            if ((c.ano % 4 == 0 && c.ano % 100 != 0) || c.ano % 400 == 0)
            {
                if (c.dia > 0 && c.dia <= 29)
                {
                    printf("A data é:\n%u/%u/%d\n", c.dia, c.mes, c.ano);
                }
                else
                {
                    printf("Dia invalido\n");
                }
            }
            else
            {
                if (c.dia > 0 && c.dia <= 28)
                {
                    printf("A data é:\n%u/%u/%d\n", c.dia, c.mes, c.ano);
                }
                else
                {
                    printf("Dia invalido\n");
                }
            }
            break;

        default:
            printf("Mês invalido\n");
            break;
        }

        break;

    case 2:

        printf("Select a day: ");
        scanf("%ud", &c.dia);
        printf("Select a month: ");
        scanf("%ud", &c.mes);
        printf("Select a year: ");
        scanf("%d", &c.ano);

        switch (c.mes)
        {

        case 1:
        case 3:
        case 7:
        case 8:
        case 10:
        case 12:

            if (c.dia > 0 && c.dia <= 31)
            {
                printf("The date is:\n%u/%u/%d\n", c.mes, c.dia, c.ano);
            }
            else
            {
                printf("Invalid day\n");
            }
            break;

        case 4:
        case 6:
        case 9:
        case 11:

            if (c.dia > 0 && c.dia <= 30)
            {
                printf("The date is:\n%u/%u/%d\n", c.mes, c.dia, c.ano);
            }
            else
            {
                printf("Invalid day\n");
            }
            break;

        case 2:

            if ((c.ano % 4 == 0 && c.ano % 100 != 0) || c.ano % 400 == 0)
            {
                if (c.dia > 0 && c.dia <= 29)
                {
                    printf("The date is:\n%u/%u/%d\n", c.mes, c.dia, c.ano);
                }
                else
                {
                    printf("Invalid day\n");
                }
            }
            else
            {
                if (c.dia > 0 && c.dia <= 28)
                {
                    printf("The date is:\n%u/%u/%d\n", c.mes, c.dia, c.ano);
                }
                else
                {
                    printf("Invalid day\n");
                }
            }
            break;

        default:
            printf("Invalid Month\n");
            break;
        }

        break;

    default:
        printf("País invalido / Invalid Contry\n");
        break;
    }

    return 0;
}