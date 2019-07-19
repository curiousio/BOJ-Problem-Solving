#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    long double m;

    scanf("%d %d", &a, &b);

    m = (b - a) / 400.0L;

    printf("%.20lf", ((1.0 / (1 + pow(10, m)))));

    return 0;
}
