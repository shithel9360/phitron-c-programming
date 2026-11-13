#include <stdio.h>

long long int summation(int a[], int n, int i)
{
    if (i == n)
    {
        return 0;
    }

    long long int sum = summation(a, n, i + 1);
    return a[i] + sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    long long int ans = summation(a, n, 0);
    printf("%lld\n", ans);

    return 0;
}
