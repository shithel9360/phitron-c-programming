#include <stdio.h>

int main() 
{
    int p,q;
    if (scanf("%d %d",&p,&q) != 2) return 0;

    int frequency[100005]={0};

    for (int i = 0; i < p; i++) 
    {
        int val;
        scanf("%d",&val);
        frequency[val]++;
    }

    
    
    for (int i=1;i<=q;i++) 
    {
        printf("%d\n",frequency[i]);
    }

    return 0;
}