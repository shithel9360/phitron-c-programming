#include <stdio.h>
void shift_zeros(int a[], int n)
{
  for (int i=0;i<n;i++)
  {
    if(a[i]!=0)
    {
      printf("%d ",a[i]);
    }
  }
  for (int i=0;i<n;i++)
  {
    if(a[i]==0)
    {
      printf("%d ",a[i]);
    }
  }
}
int main()
{
  int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    shift_zeros(a, n);
  return 0;
}
