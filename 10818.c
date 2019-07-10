#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    int min = data[0], max = data[0];

    for (i = 0; i < n; i++)
    {
        if (max < data[i])
        {
            max = data[i];
        }
        if (min > data[i])
        {
            min = data[i];
        }
    }

    printf("%d %d", min, max);

    return 0;
}
