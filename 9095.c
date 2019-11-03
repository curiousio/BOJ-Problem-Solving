#include <stdio.h>

int main()
{
    int t, n;
    int dp[15] = { 0, 1, 2, 4 };

    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);

        for (int j = 4; j <= n; j++)
        {
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        }

        printf("%d\n", dp[n]);
    }

    return 0;
}
