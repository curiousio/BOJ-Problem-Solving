#include <stdio.h>

int main()
{
    int n;
    int fac[14] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320 };

    scanf("%d", &n);

    for (int i = 9; i <= n; i++)
    {
        fac[i] = i * fac[i - 1];
    }

    printf("%d", fac[n]);

    return 0;
}
