#include <stdio.h>

int main()
{
  int a,b,c;
  char s,eq;
    scanf("%d %c %d %c %d",&a,&s,&b,&eq,&c);
    int ans = 0;
    if(s=='+')
    {
        ans = a+b;
    }
    else if(s=='-')
    {
        ans = a-b;
    }
    else if(s=='*')
    {
        ans = a*b;
    }
    if (ans==c)
    {
        printf("Yes\n");
    }
    else
    {
        printf("%d\n", ans);
    }
    
  return 0;
}
