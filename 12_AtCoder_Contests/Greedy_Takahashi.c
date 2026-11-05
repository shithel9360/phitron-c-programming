#include <stdio.h>

int main()
{
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    for (int i=1;i<=k;i++)
    {
        if(k<=a)
        {
            a=(a-k);
        
        
        }
        else 
        {   k=(k-a);
            a=0;
            if(k<=b)
            {
                b=(b-k);
            }
            else
            b=0;
        }
    }
     printf("%lld %lld\n",a,b);

  return 0;
}