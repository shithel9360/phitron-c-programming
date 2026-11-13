#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int lucky[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int flag = 0;

    for (int i = 0; i < 14; i++)
    {
        if (n % lucky[i] == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    if (flag == 0)
    {
        printf("NO\n");
    }

    return 0;
}
