#include <stdio.h>
#include <algorithm>
#include <string.h>

struct word
{
	char name[55];
}WORD[22222];

bool cmp(struct word u, struct word v)
{
	if (strlen(u.name) < strlen(v.name))
		return true;
	else if (strlen(u.name) == strlen(v.name))
	{
		if (strcmp(u.name, v.name) < 0)
			return true;
	}

	return false;
}

int main()
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", WORD[i].name);
	}

	std::sort(WORD, WORD + n, cmp);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(WORD[i].name, WORD[i + 1].name) == 0)
			continue;
		printf("%s\n", WORD[i].name);
	}

	return 0;
}
