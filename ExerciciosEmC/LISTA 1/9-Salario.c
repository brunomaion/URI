#include <stdio.h>

int main()
{
    int n;
    double val, ht, sal;

    scanf("%d %lf %lf", &n, &val, &ht);

    sal = ht * val;

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", sal);

    return 0;

}
