#include <stdio.h>

int main()
{
    int n, binary, cnt = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%1d", &binary);

        if (binary == 1)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
