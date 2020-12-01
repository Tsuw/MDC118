#include <stdio.h>

enum meses
{
    Janeiro,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
};

char m[][12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main()
{

    enum meses mes;

    for (mes = Janeiro; mes <= Dezembro; mes++)
    {

        printf("%s\n", m[mes]);
    }

    return 0;
}