#include <algorithm>
#include <cstdio>

#define MAX_NUM 4000

int main()
{
    int n, i;
    int arr[500000] = { 0 };
    double ave, sum = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    ave = sum / n;
    if (sum < 0 && n * ave - sum >= 5)
    {
        ave--;
    }
    else if (sum > 0 && sum - n * ave >= 5)
    {
        ave++;
    }
    printf("%.0lf\n", ave);
    std::sort(arr, arr + n);

    printf("%d\n", arr[n / 2]);

    int FreqMax = 0;
    int index = 0;
    int SecFreIndex = 0;
    int FreqArr[2 * MAX_NUM + 1] = { 0 };
    for (i = 0; i < n; i++)
    {
        FreqArr[arr[i] + MAX_NUM]++;
    }
    for (i = 0; i < 2 * MAX_NUM + 1; i++)
    {
        if (FreqArr[i] > FreqMax)
        {
            FreqMax = FreqArr[i];
        }
    }
    for (i = 0; i < 2 * MAX_NUM + 1; i++)
    {
        if (FreqArr[i] == FreqMax)
        {
            index++;
        }
        if (index == 2)
        {
            break;
        }
    }
    for (i = 0; i < 2 * MAX_NUM + 1; i++)
    {
        if (FreqArr[i] == FreqMax && index == 1)
        {
            printf("%d\n", i - MAX_NUM);
            break;
        }
        else if (FreqArr[i] == FreqMax && index == 2 && SecFreIndex == 0)
        {
            SecFreIndex++;
            continue;
        }
        else if (FreqArr[i] == FreqMax && index == 2 && SecFreIndex == 1)
        {
            printf("%d\n", i - MAX_NUM);
            break;
        }
    }

    printf("%d\n", arr[n - 1] - arr[0]);

    return 0;
}
