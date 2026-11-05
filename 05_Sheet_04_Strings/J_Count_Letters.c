#include <stdio.h>

char s[10000005];
int count[26 ] = {0};

int main(void)
{
    if (scanf("%s", s) != 1) return 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }

    return 0;
}