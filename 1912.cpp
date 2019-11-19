#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int n, temp;
    int sum[100001] = { 0 };

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        if (n == 1)
        {
            sum[i] = temp;
        }
        else
        {
            sum[i] = max(temp, temp + sum[i - 1]);
        }
    }

    printf("%d", *(max_element((sum + 1), sum + n + 1)));

    return 0;
}
