#include <iostream>
#include <algorithm>
#include <functional>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char str[10];
	scanf("%s", str);
	sort(str, str + strlen(str), greater<int>());

	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}
