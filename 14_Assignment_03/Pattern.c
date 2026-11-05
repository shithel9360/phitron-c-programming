#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int a=n-1;
  int b=1;
  int dash=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=a; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=b; j++)
        {
            if(dash%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        a--;
        b+=2;
        dash++;
        printf("\n");
    }
    a=1;
    b=n*2-3;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=a; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=b; j++)
        {
            if(dash%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        a++;
        b-=2;
        dash++;
        printf("\n");
    }
    return 0;
}