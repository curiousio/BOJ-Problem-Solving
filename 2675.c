#include <stdio.h>
#include <string.h>

int main()
{
    int t, r;
    char s[21];

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &r);
        scanf("%s", s);

        int len = strlen(s);

        for (int j = 0; j < len; j++)
        {
            for (int k = 1; k <= r; k++)
            {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
