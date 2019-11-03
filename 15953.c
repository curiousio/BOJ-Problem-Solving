#include <stdio.h>

int one(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 5000000;
    }
    else if (a <= 3)
    {
        return 3000000;
    }
    else if (a <= 6)
    {
        return 2000000;
    }
    else if (a <= 10)
    {
        return 500000;
    }
    else if (a <= 15)
    {
        return 300000;
    }
    else if (a <= 21)
    {
        return 100000;
    }

    return 0;
}
int two(int b)
{
    if (b == 0)
    {
        return 0;
    }
    else if (b == 1)
    {
        return 5120000;
    }
    else if (b <= 3)
    {
        return 2560000;
    }
    else if (b <= 7)
    {
        return 1280000;
    }
    else if (b <= 15)
    {
        return 640000;
    }
    else if (b <= 31)
    {
        return 320000;
    }

    return 0;
}

int main()
{
    int t;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);
        printf("%d\n", one(a) + two(b));
    }

    return 0;
}
