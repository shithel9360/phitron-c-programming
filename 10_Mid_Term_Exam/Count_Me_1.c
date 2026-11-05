#include <stdio.h>

int main()
{
  int N;
  scanf("%d", &N);
  int a[N];
  int counts=0,countt=0;
  for(int i=0;i<N;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<N;i++)
  {
    if (a[i]%2==0)
      counts++;
    else if (a[i]%3==0)
      countt++;
  }
  printf("%d %d", counts, countt);
  return 0;
}