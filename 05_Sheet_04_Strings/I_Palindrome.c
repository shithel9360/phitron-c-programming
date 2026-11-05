#include <stdio.h>
#include <string.h>
int main()
{
  char str[100005];
    scanf("%s", str);
  int len = strlen(str);
  int flag = 1;
  for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
        flag = 0;
        printf("NO\n");
        break;
        }
    }
    if (flag==1)
    {
        printf("YES\n");
    }
  return 0;
}