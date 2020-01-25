#include <stdio.h>

int main()
{
	int input, i;
	int a[3], b[3];

	scanf("%d", &input);
	i = 0;
	while (input != 0)
	{
		a[i] = input % 10;
		input /= 10;
		i++;
	}
	scanf("%d", &input);
	i = 0;
	while (input != 0)
	{
		b[i] = input % 10;
		input /= 10;
		i++;
	}

	for (int i = 0; i < 3; i++)
	{
		if (a[i] == b[i])
		{
			continue;
		}
		else if (a[i] > b[i])
		{
			printf("%d%d%d", a[0], a[1], a[2]);
			break;
		}
		else
		{
			printf("%d%d%d", b[0], b[1], b[2]);
			break;
		}
	}

	return 0;
}
