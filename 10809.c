#include <stdio.h>
#include <string.h>

int main()
{
    int len, alphabet[26];
    char s[101];

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = -1;
    }

    scanf("%s", s);
    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int n = s[i] - 'a';
        if (alphabet[n] == -1)
        {
            alphabet[n] = i;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%d ", alphabet[i]);
    }

    return 0;
}
