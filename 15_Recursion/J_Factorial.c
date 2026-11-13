#include <stdio.h>

long long int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    long long int ans = factorial(n - 1);
    return n * ans;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long int res = factorial(n);
    printf("%lld\n", res);

    return 0;
}
