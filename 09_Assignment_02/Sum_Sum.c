#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  int positivesum = 0;
  int negativesum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            positivesum += a[i];
        }
        else if (a[i] < 0)
        {
            negativesum += a[i];
        }
    } 
    printf("%d %d\n", positivesum, negativesum);
  return 0;
}
