#include <stdio.h>

int main()
{
    int n, m, score[1000], temp;
    double cal, sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (score[j] < score[j + 1])
            {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    m = score[0];

    for (int i = 0; i < n; i++)
    {
        cal = (double)score[i] / m * 100;
        sum += cal;
    }

    printf("%.2lf", (double)sum / n);

    return 0;
}
