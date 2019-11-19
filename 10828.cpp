#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>

int main()
{
    int n;
    std::stack <int> st;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char str[10];
        scanf("%s", str);
        if (!strcmp(str, "push"))
        {
            int temp;
            scanf("%d", &temp);
            st.push(temp);
        }
        else if (!strcmp(str, "pop"))
        {
            if (st.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", st.top());
                st.pop();
            }
        }
        else if (!strcmp(str, "size"))
        {
            printf("%lu\n", st.size());
        }
        else if (!strcmp(str, "empty"))
        {
            printf("%d\n", st.empty());
        }
        else if (!strcmp(str, "top"))
        {
            if (st.empty())
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", st.top());
            }
        }
    }

    return 0;
}
