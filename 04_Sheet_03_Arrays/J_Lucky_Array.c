#include <stdio.h>
#include<limits.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int min= INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(a[i]<min)
    {
      min=a[i];
    }
  }

  int fre=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==min)
        {
            fre++;
        }
    }
    if(fre%2!=0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }

  return 0;
}
