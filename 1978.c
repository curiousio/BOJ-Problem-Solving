#include <stdio.h>

int main()
{
    int n, data[100], flag, count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 1; j <= data[i]; j++)
        {
            if (data[i] % j == 0)
            {
                flag++;
            }
        }
        if (flag == 2)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
