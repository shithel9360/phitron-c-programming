#include <stdio.h>

long long int log2_val(long long int n)
{
    if (n < 2)
    {
        return 0;
    }

    long long int ans = log2_val(n / 2);
    return 1 + ans;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int res = log2_val(n);
    printf("%lld\n", res);

    return 0;
}
