#include <stdio.h>

int main()
{
    int t, i;

    scanf("%d", &t);

    int test[t][2];

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &test[i][0], &test[i][1]);
    }

    for (i = 0; i < t; i++)
    {
        printf("%d\n", test[i][0] + test[i][1]);
    }

    return 0;
}
