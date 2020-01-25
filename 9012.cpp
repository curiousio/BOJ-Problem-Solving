#include <iostream>
#include <stack>
#include <cstdio>
#include <cstring>

int main()
{
    int t;

    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        std::stack <int> st;
        char input[51];

        scanf("%s", input);

        int len = strlen(input);
        for (int j = 0; j < len; j++)
        {
            if (input[j] == '(')
            {
                st.push('(');
            }
            else
            {
                if (!st.empty())
                {
                    st.pop();
                }
                else
                {
                    st.push(')');
                    break;
                }
            }
        }
        if (st.empty())
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
