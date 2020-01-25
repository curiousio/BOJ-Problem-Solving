#include <stdio.h>

int main()
{
    int count = 0;

    int temp;
    while (scanf("%d", &temp) != EOF)
    {
        if (temp > 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
