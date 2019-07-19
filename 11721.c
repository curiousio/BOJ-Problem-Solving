#include <stdio.h>
#include <string.h>

int main()
{
    int count = 0;
    char word[100];

    gets(word);

    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c", word[i]);
        count++;

        if (count % 10 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
