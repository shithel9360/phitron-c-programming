#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  int mx=0;
  for(int i=0;i<=n;i++)
  {
    int val;
    scanf("%d",&val);
    if(val>mx)
    {
        mx=val;

    }

    
  }

printf("%d",mx);
  return 0;
}