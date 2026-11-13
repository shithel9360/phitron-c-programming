#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5];
    int row = 0, col = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    int ans = abs(row - 2) + abs(col - 2);
    printf("%d\n", ans);

    return 0;
}
