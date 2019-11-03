#include <stdio.h>
#include <string.h>

int main()
{
    int len, time = 0;
    char dial[16];

    scanf("%s", dial);

    len = strlen(dial);

    for (int i = 0; i < len; i++)
    {
        if (dial[i] == 0)
        {
            time += 10;
        }
        else if (dial[i] == 1)
        {
            time += 1;
        }
        else if (dial[i] == 'A' || dial[i] == 'B' || dial[i] == 'C')
        {
            time += 2;
        }
        else if (dial[i] == 'D' || dial[i] == 'E' || dial[i] == 'F')
        {
            time += 3;
        }
        else if (dial[i] == 'G' || dial[i] == 'H' || dial[i] == 'I')
        {
            time += 4;
        }
        else if (dial[i] == 'J' || dial[i] == 'K' || dial[i] == 'L')
        {
            time += 5;
        }
        else if (dial[i] == 'M' || dial[i] == 'N' || dial[i] == 'O')
        {
            time += 6;
        }
        else if (dial[i] == 'P' || dial[i] == 'Q' || dial[i] == 'R' || dial[i] == 'S')
        {
            time += 7;
        }
        else if (dial[i] == 'T' || dial[i] == 'U' || dial[i] == 'V')
        {
            time += 8;
        }
        else if (dial[i] == 'W' || dial[i] == 'X' || dial[i] == 'Y' || dial[i] == 'Z')
        {
            time += 9;
        }
    }

    printf("%d", time + len);

    return 0;
}
