#include <stdio.h>
#include <string.h>
int main()
{
  char c[100005];
  scanf("%s", c);
  int len = strlen(c);
  for (int i = 0; i < len; i++)
  if (c[i]==',')
  c[i]=' ';
  else if (c[i]>='A' && c[i]<='Z')
    c[i]+=32;
    else if (c[i]>='a' && c[i]<='z')
    c[i]-=32;
  printf("%s", c);

  return 0;
}