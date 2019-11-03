#include <stdio.h>

int gcd(int a, int b)
{
    int mod = a % b;
    while (mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}

int main()
{
    int n, m, u;

    scanf("%d:%d", &n, &m);

    u = gcd(n, m);

    printf("%d:%d", n / u, m / u);

    return 0;
}
