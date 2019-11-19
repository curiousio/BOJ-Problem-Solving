#include <stdio.h>

int arr[501][501];
int dp[501][501];

int main()
{
	int n;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i == j)
			{
				dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
			}
			else if (j == 1)
			{
				dp[i][j] = arr[i][j] + dp[i - 1][j];
			}
			else
			{
				dp[i][j] = arr[i][j] + ((dp[i - 1][j - 1] > dp[i - 1][j]) ? dp[i - 1][j - 1] : dp[i - 1][j]);
			}
		}
	}

	int max = 0;
	for (int i = 1; i <= n; i++)
	{
		if (max < dp[n][i])
		{
			max = dp[n][i];
		}
	}

	printf("%d", max);

	return 0;
}
