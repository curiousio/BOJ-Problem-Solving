#include <iostream>
#include <cstdio>

int count[10001];

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int temp;
        scanf("%d", &temp);
        count[temp]++;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (count[i] == 0)
        {
            continue;
        }
        for (int j = 1; j <= count[i]; j++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
