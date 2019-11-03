#include <iostream>
#include <algorithm>
#include <cstdio>

struct coord
{
    int x, y;
} a[100000];

bool cmp(struct coord f, struct coord b)
{
    if (f.x < b.x)
    {
        return true;
    }
    else if (f.x == b.x)
    {
        if (f.y < b.y)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i].x, &a[i].y);
    }

    std::sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", a[i].x, a[i].y);
    }

    return 0;
}
