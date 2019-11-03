#include <stdio.h>

void nine(int t)
{
    if (t / 9 != 0)
    {
        nine(t / 9);
    }
    printf("%d", t % 9);
}


int main()
{
    int t;

    scanf("%d", &t);

    nine(t);

    return 0;
}
