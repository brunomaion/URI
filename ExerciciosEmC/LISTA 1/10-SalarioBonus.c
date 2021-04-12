#include <stdio.h>

int main()
{
    char nome[21];
    double venda, sal, bon, total;

    scanf("%s", nome);
    getchar();

    scanf("%lf %lf", &sal, &venda);

    bon = (venda * 0.15);
    total = sal + bon;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;

}
