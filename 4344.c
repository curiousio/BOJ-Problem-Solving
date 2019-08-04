#include <stdio.h>

int main()
{
    int c;

    scanf("%d", &c);

    for (int i = 1; i <= c; i++)
    {
        int n, sum = 0, count = 0, score[1000];
        double avg;

        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &score[j]);
            sum += score[j];
        }
        avg = (double)sum / n;

        for (int j = 0; j < n; j++)
        {
            if (score[j] > avg)
            {
                count++;
            }
        }

        printf("%.3lf%%\n", ((double)count / n) * 100);
    }

    return 0;
}
