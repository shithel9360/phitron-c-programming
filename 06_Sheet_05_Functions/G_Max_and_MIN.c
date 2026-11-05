#include <stdio.h>
#include <limits.h>

void fun(int a[], int n)
{
    int min = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    int max = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {   
            max = a[i];
        }
    }

    printf("%d %d\n", min, max);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fun(a, n);

    return 0;
}