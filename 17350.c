#include <stdio.h>
#include <string.h>

int main()
{
    int n, flag = 0;

    scanf("%d", &n);

    char name[1000][99], anj[] = "anj";
    char *p = name, *q = &anj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j == '\0'; j++)
        {
            scanf("%s", &name[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (strcmp(name[i], q) == 0)
        {
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("뭐야?");
    }
    else
    {
        printf("뭐야;");
    }

    return 0;
}
