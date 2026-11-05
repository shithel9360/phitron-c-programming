#include <stdio.h>
#include <string.h>
int main()
{
    char s [1000001];
    scanf("%s", s);
    int sum = 0;
    int count = strlen(s);
    for (int i=0;i<count;i++)
    {
        sum+=s[i]-48;
    }
    printf("%d\n", sum);
    return 0;
}