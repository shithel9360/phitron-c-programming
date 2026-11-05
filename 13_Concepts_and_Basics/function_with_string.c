#include <stdio.h>
#include <string.h>
void fun(char s[])
{
 printf("%s\n",s);
 printf("%d\n",(int)strlen(s)); 
}
int main()
{
  char s[100];
  scanf("%s",s);
  
  fun(s);
 
  return 0;
}
