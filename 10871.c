#include <stdio.h>

int main()
{
    int n, x, i;

    scanf("%d %d", &n, &x);

    int A[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] < x)
        {
            printf("%d ", A[i]);
        }
    }

    return 0;
}
