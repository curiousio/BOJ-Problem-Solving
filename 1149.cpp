#include <iostream>
#include <algorithm>
#include <cstdio>

int input[1001][3];
int dp[1001][3];

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &input[i][j]);
        }
    }

    dp[1][0] = input[1][0];
    dp[1][1] = input[1][1];
    dp[1][2] = input[1][2];
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                dp[i][j] = std::min(dp[i - 1][1], dp[i - 1][2]) + input[i][j];
            }
            else if (j == 1)
            {
                dp[i][j] = std::min(dp[i - 1][0], dp[i - 1][2]) + input[i][j];
            }
            else if (j == 2)
            {
                dp[i][j] = std::min(dp[i - 1][0], dp[i - 1][1]) + input[i][j];
            }
        }
    }

    printf("%d", *std::min_element(&dp[n][0], &dp[n][0] + 3));

    return 0;
}
