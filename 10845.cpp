#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>

int main()
{
    int n;
    std::queue <int> q;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char str[10];
        scanf("%s", str);
        if (!strcmp(str, "push"))
        {
            int temp;
            scanf("%d", &temp);
            q.push(temp);
        }
        else if (!strcmp(str, "pop"))
        {
            if (q.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", q.front());
                q.pop();
            }
        }
        else if (!strcmp(str, "size"))
        {
            printf("%lu\n", q.size());
        }
        else if (!strcmp(str, "empty"))
        {
            printf("%d\n", q.empty());
        }
        else if (!strcmp(str, "front"))
        {
            if (q.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", q.front());
            }
        }
        else if (!strcmp(str, "back"))
        {
            if (q.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", q.back());
            }
        }
    }

    return 0;
}
