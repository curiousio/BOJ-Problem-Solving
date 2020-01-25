#include <stdio.h>

int main()
{
	int i, j, sum = 0;
	int arr[9];

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	for (i = 0; i < 9; i++)
	{
		int flag = 0;
		for (j = i + 1; j < 9; j++)
		{
			if (i != j)
			{
				if (sum - arr[i] - arr[j] == 100)
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	for (int k = 0; k < 9; k++)
	{
		if (k != i && k != j)
		{
			printf("%d\n", arr[k]);
		}
	}

	return 0;
}
