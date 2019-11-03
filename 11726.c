#include <stdio.h>

int main()
{
    int n;
    int DP[1001] = { 0, 1, 2 };

    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {
        DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
    }

    printf("%d", DP[n]);

    return 0;
}
