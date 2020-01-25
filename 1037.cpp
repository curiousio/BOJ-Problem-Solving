#include <algorithm>
#include <cstdio>

int main()
{
    int count;
    int n[50];

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n[i]);
    }
    std::sort(n, n + count);
    printf("%d", n[0] * n[count - 1]);

    return 0;
}
