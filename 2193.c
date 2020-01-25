#include <stdio.h>

int main()
{
	int n;
	long long int pinary[100] = { 0, 1, 1, 2 };

	scanf("%d", &n);

	for (int i = 4; i <= n; i++)
	{
		pinary[i] = pinary[i - 1] + pinary[i - 2];
	}

	printf("%lld", pinary[n]);

	return 0;
}
