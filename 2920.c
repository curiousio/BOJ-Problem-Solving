#include <stdio.h>

int main()
{
	int data[10], count;

	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &data[i]);
	}

	count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (data[i] == i + 1)
		{
			count++;
		}
	}
	if (count == 8)
	{
		printf("ascending");
		return 0;
	}

	count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (data[i] == 8 - i)
		{
			count++;
		}
	}
	if (count == 8)
	{
		printf("descending");
		return 0;
	}

	printf("mixed");

	return 0;
}
