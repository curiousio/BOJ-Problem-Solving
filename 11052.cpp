#include <algorithm>
#include <cstdio>

int main()
{
	int n;
	int p[1001] = { 0 };
	int dp[1001] = { 0 };

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &p[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			dp[i] = std::max(dp[i], dp[i - j] + p[j]);
		}
	}

	printf("%d", dp[n]);

	return 0;
}
