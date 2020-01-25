#include <stdio.h>

int main()
{
    int flag = 0;

    int first, cmp;
    scanf("%d", &first);
    while (scanf("%d", &cmp) != EOF)
    {
        if (first > cmp)
        {
            flag = 1;
            break;
        }
        first = cmp;
    }

    if (flag == 0)
    {
        printf("Good");
    }
    else
    {
        printf("Bad");
    }

    return 0;
}
