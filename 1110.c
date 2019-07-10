#include <stdio.h>

int main()
{
    int n, new, sum, cycle = 0;

    scanf("%d", &n);

    new = n;

    do
    {
        sum = new / 10 + new % 10;
        new = (new % 10) * 10 + sum % 10;

        cycle++;
    } while (new != n);

    printf("%d", cycle);

    return 0;
}
