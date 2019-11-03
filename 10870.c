#include <stdio.h>

int main()
{
    int n;
    int fibo[21] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597 };

    scanf("%d", &n);

    for (int i = 18; i <= n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    printf("%d", fibo[n]);

    return 0;
}
