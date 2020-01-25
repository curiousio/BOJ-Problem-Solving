#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int s, n, sum = 0;
        scanf("%d", &s);
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            int q, p;
            scanf("%d %d", &q, &p);
            sum += q * p;
        }
        printf("%d\n", s + sum);
    }

    return 0;
}
