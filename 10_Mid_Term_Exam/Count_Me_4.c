#include <stdio.h>

int main()
{
  char s[10005];
  scanf("%s", s);
  for(char ch='a';ch<='z';ch++)
  {
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
      if(s[i]==ch)
        count++;
    }
    if(count>0)
      printf("%c - %d\n", ch, count);
  }
  return 0;
}