#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b);
    scanf("%d", &c);

    c *= 2;

    if (a + b >= c)
    {
        printf("%d", a + b - c);
    }
    else
    {
        printf("%d", a + b);
    }

    return 0;
}
