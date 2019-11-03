#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char n[100000];
	int b;
	int len, cnt = 0;
	int sum = 0;

	scanf("%s %d", n, &b);

	len = strlen(n);
	for (int i = len - 1; i >= 0; i--)
	{
		if (n[i] >= 'A' && n[i] <= 'Z')
		{
			sum += (n[i] - 'A' + 10) * pow(b, cnt);
		}
		else
		{
			sum += (n[i] - '0') * pow(b, cnt);
		}

		cnt++;
	}

	printf("%d", sum);
	
	return 0;
}
