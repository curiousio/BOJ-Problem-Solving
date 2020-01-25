#include <stdio.h>

struct _dung
{
	int x;
	int y;
}dung[50];

int main()
{
	int n;
	int count[50] = { 0 }, rank[50] = { 0 };

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &dung[i].x, &dung[i].y);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				if (dung[i].x < dung[j].x && dung[i].y < dung[j].y)
				{
					count[i]++;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (count[j] == i && rank[j] == 0)
			{
				rank[j] = i + 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", rank[i]);
	}

	return 0;
}
