#include <stdio.h>

int main()
{
  int t;
    scanf("%d", &t);
    while(t--)
    {
        char s[100005];
        scanf("%s", s);
        int large=0,small=0,digit=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                large++;
            else if(s[i]>='a' && s[i]<='z')
                small++;
            else if(s[i]>='0' && s[i]<='9')
                digit++;

        }
        printf("%d %d %d\n", large, small, digit);
    }
  return 0;
}