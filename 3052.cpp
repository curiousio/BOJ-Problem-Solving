#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int data[10], remainder[10], count = 1;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &data[i]);
		remainder[i] = data[i] % 42;
	}

	sort(remainder, remainder + 10);

	int check = remainder[0];
	for (int i = 1; i < 10; i++)
	{
		if (remainder[i] != check)
		{
			check = remainder[i];
			count++;
		}
	}

	printf("%d", count);

	return 0;
}
