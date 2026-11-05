#include <stdio.h>

int main()
{
  long long int n;
  scanf("%lld", &n);
  long long int arr[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%lld", &arr[i]);
  }
  long long int sum = 0;
  for(int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  if(sum < 0)
  {
    sum = sum * -1;
  }
  printf(" %lld\n", sum);
  return 0;
}