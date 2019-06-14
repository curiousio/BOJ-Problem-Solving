#include <stdio.h>
#include <string.h>

int main()
{
    int i, wordcount = 0;
    char str[1000001];

    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            wordcount++;
        }
    }

    if (str[strlen(str) - 1] != ' ')
    {
        wordcount++;
    }
    if (str[0] == ' ')
    {
        wordcount--;
    }

    printf("%d", wordcount);

    return 0;
}
