#include <stdio.h>

int main()
{
	int n, count = 0;

	scanf("%d", &n);

	if (n < 100)
	{
		count = n;
		printf("%d", count);
	}
	else
	{
		count = 99;
		for (int i = 100; i <= n; i++)
		{
			if (i == 1000)
			{
				break;
			}
			int div[3];
			int j = 0, k = i;
			while (k > 0)
			{
				div[j] = k % 10;
				k /= 10;
				j++;
			}
			if (div[1] - div[0] == div[2] - div[1])
			{
				count++;
			}
		}
		printf("%d", count);
	}

	return 0;
}
