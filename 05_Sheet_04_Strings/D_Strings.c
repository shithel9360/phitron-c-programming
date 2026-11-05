#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];
  scanf("%s %s", a, b);
  int len_a = strlen(a);
  int len_b = strlen(b);
  printf("%d %d\n", len_a, len_b);
  printf("%s%s\n", a, b);


  char temp=a[0];
  a[0]=b[0];
  b[0]=temp;
  printf("%s %s\n", a, b);

  return 0;
}