#include <iostream>
#include <algorithm>
#include <cstdio>

int arr[1001], max[1001];

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        max[i] = arr[i];

        for (int j = 1; j < i; j++)
        {
            if ((arr[j] < arr[i]) && (max[i] < max[j] + arr[i]))
            {
                max[i] = max[j] + arr[i];
            }
        }
    }

    printf("%d", *(std::max_element(max + 1, max + 1 + n)));

    return 0;
}
