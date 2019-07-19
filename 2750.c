#include <stdio.h>

int main()
{
    int n, temp, data[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (data[i] < data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", data[i]);
    }

    return 0;
}
