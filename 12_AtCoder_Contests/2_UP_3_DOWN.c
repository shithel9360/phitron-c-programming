#include <stdio.h>

int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  if (x<y)
  {
    int diff= y-x;
    if (diff<=2)
    printf("Yes\n");
    else
    printf("No\n");
  }

  if (x>y)
  {
    int diff= x-y;
    if (diff<=3)
    printf("Yes\n");
    else
    printf("No\n");
  }
  return 0;
}