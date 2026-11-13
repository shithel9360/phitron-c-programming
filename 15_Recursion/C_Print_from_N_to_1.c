#include <stdio.h>

void print_numbers(int n)
{
    if (n == 0)
    {
        return;
    }

    if (n == 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d ", n);
    }

    print_numbers(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_numbers(n);
    printf("\n");

    return 0;
}
