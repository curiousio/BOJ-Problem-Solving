#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

long long int str[1000001];

int main()
{
    int n, index = 0, count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &str[i]);
    }

    sort(str, str + n);

    long long int max = str[0];
    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[i + 1])
        {
            if (max < count)
            {
                max = count;
                index = i;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }

    printf("%lld", str[index]);

    return 0;
}
