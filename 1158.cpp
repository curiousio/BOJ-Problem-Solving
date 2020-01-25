#include <iostream>
#include <queue>
#include <cstdio>

int main()
{
    int n, k;
    std::queue <int> q;

    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    printf("<");
    while (!q.empty())
    {
        for (int i = 1; i < k; i++)
        {
            int temp;
            temp = q.front();
            q.pop();
            q.push(temp);
        }
        if (n == 1)
        {
            printf("%d", q.front());
        }
        else
        {
            printf("%d, ", q.front());
        }
        q.pop();
        n--;
    }
    printf(">");

    return 0;
}
