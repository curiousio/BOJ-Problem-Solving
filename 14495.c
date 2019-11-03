#include <stdio.h>

int main()
{
    int n;
    long long int dp[117] = { 0, 1, 1, 1, 2, 3, 4, 6, 9, 13, 19 };

    scanf("%d", &n);

    for (int i = 11; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 3];
    }

    printf("%lld", dp[n]);

    return 0;
}
