#include <stdio.h>

int main()
{
    int t;
    long long int DP[1000] = { 0, 1, 1, 1, 2, 2 };

    scanf("%d", &t);
    while (t > 0)
    {
        int temp;
        scanf("%d", &temp);
        for (int i = 6; i <= temp; i++)
        {
            DP[i] = DP[i - 1] + DP[i - 5];
        }
        printf("%lld\n", DP[temp]);
        t--;
    }

    return 0;
}
