#include <stdio.h>
#include <string.h>

int isitcute(char k[999999], int n, int sub);

int main()
{
	int n, sub;
	char k[999999];

	scanf("%s", &k);
	n = strlen(k);
	sub = k[1] - k[0];

	if (n == 1)
	{
		printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
	}
	else if (isitcute(k, n, sub) == 1)
	{
		printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");
	}
	else
	{
		printf("흥칫뿡!! <(￣ ﹌ ￣)>");
	}

	return 0;
}

int isitcute(char k[999999], int n, int sub)
{
	int i, count = 0;

	for (i = n; i > 0; i--)
	{
		if (k[i] - k[i - 1] == sub)
		{
			count++;
		}
	}

	if (count == n - 1)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
