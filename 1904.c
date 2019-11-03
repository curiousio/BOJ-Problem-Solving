#include <stdio.h>

int dp[1000001] = { 0, 1, 2, 3, 5, 8 };

int main()
{
    int n;

    scanf("%d", &n);

    for (int j = 6; j <= n; j++)
    {
        dp[j] = (dp[j - 1] + dp[j - 2]) % 15746;
    }

    printf("%d", dp[n]);

    return 0;
}
