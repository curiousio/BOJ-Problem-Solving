#include <stdio.h>
#include <string.h>

char two[1000001];

int main()
{
    int front, len, cnt = 0, temp = 0;

    scanf("%s", two);

    len = strlen(two);
    front = len % 3;

    for (int i = front - 1; i >= 0; i--)
    {
        int exp = 1;

        for (int j = 0; j < cnt; j++)
        {
            exp *= 2;
        }

        cnt++;

        temp += (two[i] - '0') * exp;

        if (i == 0)
        {
            printf("%d", temp);
            cnt = 0;
            temp = 0;
        }
    }
    for (int i = front; i < len; i++)
    {
        int exp = 4;

        for (int j = 0; j < cnt; j++)
        {
            exp /= 2;
        }

        cnt++;

        temp += (two[i] - '0') * exp;

        if (cnt > 2)
        {
            printf("%d", temp);
            cnt = 0;
            temp = 0;
        }
    }

    return 0;
}
