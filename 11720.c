#include <stdio.h>

int main()
{
    int n, temp, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%1d", &temp);
        sum += temp;
    }

    printf("%d", sum);

    return 0;
}
