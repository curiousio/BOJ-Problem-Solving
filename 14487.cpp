#include <iostream>
#include <algorithm>
#include <cstdio>

int main()
{
    int n, sum = 0;
    int v[50000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        sum += v[i];
    }

    std::sort(v, v + n);

    printf("%d", sum - v[n - 1]);

    return 0;
}
