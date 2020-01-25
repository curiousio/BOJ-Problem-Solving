#include <algorithm>
#include <cstdio>

int main()
{
	int n;
	int arr[301], dp[301] = { 0 };

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}

	dp[1] = arr[1];
	dp[2] = dp[1] + arr[2];
	for (int i = 3; i <= n; i++)
	{
		dp[i] = std::max(arr[i] + dp[i - 2], arr[i] + dp[i - 3] + arr[i - 1]);
	}

	printf("%d", dp[n]);

	return 0;
}
