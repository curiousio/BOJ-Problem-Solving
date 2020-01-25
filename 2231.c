#include <stdio.h>

int main()
{
	int n, ans = -1;

	scanf("%d", &n);

	for (int i = 1; i <= 1000000; i++)
	{
		int sum = 0, temp = i;
		while (temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}
		if (n == sum + i)
		{
			ans = i;
			break;
		}
	}

	if (ans != -1)
	{
		printf("%d", ans);
	}
	else
	{
		printf("0");
	}

	return 0;
}
