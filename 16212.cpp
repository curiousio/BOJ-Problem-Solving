#include <iostream>
#include <algorithm>
#include <cstdio>

int a[500001];

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    std::sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
