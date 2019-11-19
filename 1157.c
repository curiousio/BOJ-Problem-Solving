#include <stdio.h>
#include <ctype.h>

int num[26];
char str[1000007];

int main()
{
	scanf("%s", str);

	for (int i = 0; str[i]; i++)
	{
		str[i] = toupper(str[i]);
		num[str[i] - 'A']++;
	}
	
	int max_index = -1, max = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max == num[i])
		{
			max_index = -1;
			continue;
		}
		if (max < num[i])
		{
			max = num[i];
			max_index = i;
		}
	}

	printf("%c", max_index == -1 ? '?' : toupper(max_index + 'A'));

	return 0;
}
