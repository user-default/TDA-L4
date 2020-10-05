#include <stdio.h>

int main()
{
    int i, j;
    double k;
    scanf("%d %d", &i, &j);
    k = (i * j)/ 12.000;
    printf("%.3lf\n", k);
    return 0;
}
