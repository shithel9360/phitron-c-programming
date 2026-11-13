#include <stdio.h>

int count_vowels(char s[], int i)
{
    if (s[i] == '\0')
    {
        return 0;
    }

    int count = count_vowels(s, i + 1);

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
        s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char s[205];
    fgets(s, sizeof(s), stdin);

    int ans = count_vowels(s, 0);
    printf("%d\n", ans);

    return 0;
}
