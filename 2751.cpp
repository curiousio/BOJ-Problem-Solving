#include <iostream>
#include <algorithm>

int n;
int a[1000000];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }

    std::sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(a + i));
    }
    
    return 0;
}
