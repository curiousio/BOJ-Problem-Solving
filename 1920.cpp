#include <iostream>
#include <algorithm>
#include <cstdio>

int n, m, find;
int a[100000];

void binSearch(void)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        // mid = left + (right - left) / 2;

        if (*(a + mid) == find)
        {
            printf("1\n");
            return;
        }
        else if (*(a + mid) < find)
        {
            left = mid + 1;
        }
        else if (*(a + mid) > find)
        {
            right = mid - 1;
        }
    }

    printf("0\n");
    return;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    std::sort(a, a + n);
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &find);
        binSearch();
    }

    return 0;
}
