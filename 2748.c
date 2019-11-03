#include <stdio.h>

int main()
{
    int n;
    long long int DP[90] = { 0, 1, 1 };

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");
    }
    else if (n <= 2)
    {
        printf("1");
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            DP[i] = DP[i - 1] + DP[i - 2];
        }
        printf("%lld", DP[n]);
    }

    return 0;
}
