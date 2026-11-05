#include <stdio.h>
#include <string.h>

int main()
{
  char s1[30];
  char s2[30];
  scanf("%s", s1);
  scanf("%s", s2);
  int cmp = strcmp(s1, s2);
  if (cmp <= 0)
  printf("%s\n", s1);
  else
  printf("%s\n", s2);
  return 0;
}