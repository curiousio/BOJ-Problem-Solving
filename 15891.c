#include <stdio.h>

int main()
{
    int n;
    int a[5] = { 65, 17, 4, 4, 64 };

    scanf("%d", &n);
    printf("%d", a[n - 1]);

    return 0;
}
