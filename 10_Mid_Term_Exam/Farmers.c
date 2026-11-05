#include <stdio.h>

int main()
{
  int T;
    scanf("%d", &T);
    while(T--)
    {
      int m1,m2,d;
        scanf("%d %d %d", &m1, &m2, &d);
        int days=(m1*d)/(m1+m2);
        int fewer_days=d-days;
        printf("%d\n", fewer_days);
    }
  return 0;
}