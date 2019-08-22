#include <stdio.h>
#include <string.h>

int main()
{
	int t;
	char str[90];
	
	scanf("%d", &t);
	for (int i = 1; i <= t; i++)
	{
		scanf("%s", str);

		int score = 0, combo = 0, len = strlen(str);

		for (int j = 0; j < len; j++)
		{
			if (str[j] == 'O')
			{
				score += ++combo;
				if (str[j + 1] == 'X')
				{
					combo = 0;
				}
			}
			else
			{
				combo = 0;
			}
		}

		printf("%d\n", score);
	}

	return 0;
}
