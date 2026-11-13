#include <stdio.h>

int find_max(int a[], int b, int c)
{
    if (c == b - 1)
    {
        return a[c];
    }

    int max_val = find_max(a, b, c + 1);

    if (a[c] > max_val)
    {
        return a[c];
    }
    else
    {
        return max_val;
    }
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

    int ans = find_max(a, n, 0);
    printf("%d\n", ans);

    return 0;
}
