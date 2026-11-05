#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char s[55], t[55];
    scanf("%s%s", s, t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    int i;

    for (i = 0; i < len_s && i < len_t; i++)
    {
      printf("%c%c", s[i], t[i]);
    }
    if (len_s > len_t)
    {
      printf("%s", s + i);
    }
    if (len_t > len_s)
    {
      printf("%s", t + i);
    }
    printf("\n");
   
  }
    return 0;
  }