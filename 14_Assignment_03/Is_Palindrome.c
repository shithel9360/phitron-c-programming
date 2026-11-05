#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
      
{
   int i=0;
    int j=strlen(s)-1;
    
    while(i<j)
    {
        if(s[i]!=s[j])
        {
           return 0;
           
        }
        i++;
        j--;
    }
    return 1;
}
int main()
{
  char s[1005];
    scanf("%s", s);
    int ans = is_palindrome(s);
    if(ans==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
  return 0;
}