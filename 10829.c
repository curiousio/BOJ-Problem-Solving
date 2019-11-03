#include <stdio.h>

void func(long long int n)
{
    if (n == 1)
    {
        printf("%lld", n);
    }
    else if (n % 2 == 0)
    {
        func(n / 2);
        printf("0");
    }
    else
    {
        func((n - 1) / 2);
        printf("1");
    }
}

int main()
{
    long long int n;

    scanf("%lld", &n);

    func(n);

    return 0;
}
