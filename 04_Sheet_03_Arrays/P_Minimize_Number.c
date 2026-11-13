#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int cnt = 0;
    int flag = 1;

    while (flag == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                flag = 0;
                break;
            }
            a[i] = a[i] / 2;
        }

        if (flag == 1)
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
