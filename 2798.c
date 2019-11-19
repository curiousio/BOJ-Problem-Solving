#include <stdio.h>

int main()
{
	int n, m, max = 0;
	int black[100];

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &black[i]);
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int temp = black[i] + black[j] + black[k];
				if (temp <= m)
				{
					if (temp>max)
					{
						max = temp;
					}
				}
			}
		}
	}

	printf("%d", max);

	return 0;
}
