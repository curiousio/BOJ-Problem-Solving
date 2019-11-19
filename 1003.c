#include <stdio.h>

int main()
{
    int t;
    int dp0[41] = { 1, 0 };
    int dp1[41] = { 0, 1 };

    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        for (int j = 2; j <= n; j++)
        {
            dp0[j] = dp0[j - 1] + dp0[j - 2];
            dp1[j] = dp1[j - 1] + dp1[j - 2];
        }

        printf("%d %d\n", dp0[n], dp1[n]);
    }

    return 0;
}
