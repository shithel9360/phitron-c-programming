#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        long long int a, b, c, d;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

        long long int product = b * c * d;

        if (product != 0 && a % product == 0)
        {
            printf("%lld\n", a / product);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
