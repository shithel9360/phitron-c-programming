#include <stdio.h>

int main()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a % c == 0 && b % c == 0)
    {
        printf("Both\n");
    }
    if (a % c == 0 && b % c != 0)
    {
        printf("Memo\n");
    }
    if (b % c == 0 && a % c != 0)
    {
        printf("Momo\n");
    }
    if (a % c != 0 && b % c != 0)
    {
        printf("No One\n");
    }

    return 0;
}
