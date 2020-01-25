#include <iostream>
#include <queue>
#include <cstdio>

int main()
{
    int n;
    std::queue <int> q;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }

    while (n-- >= 2)
    {
        q.pop();
        int temp;
        temp = q.front();
        q.pop();
        q.push(temp);
    }

    printf("%d", q.front());

    return 0;
}
