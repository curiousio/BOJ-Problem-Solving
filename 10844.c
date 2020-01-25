#include <stdio.h>

int n, dp[101][11];
long long int ans;

int main()
{
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++)
	{
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}

	for (int i = 0; i <= 9; i++)
	{
		ans += dp[n][i];
	}

	printf("%lld", ans % 1000000000);

	return 0;
}
