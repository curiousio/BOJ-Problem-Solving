#include <stdio.h>

int n, s, cnt, arr[20];

void find(int sum, int num)
{
	if (num == n)
	{
		if (sum == s)
		{
			cnt++;
		}
		return;
	}
	find(sum + arr[num], num + 1);
	find(sum, num + 1);
}

int main()
{
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	find(0, 0);
	if (!s)
	{
		printf("%d\n", cnt - 1);
	}
	else
	{
		printf("%d\n", cnt);
	}

	return 0;
}
