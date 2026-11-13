#include <stdio.h>

void print_numbers(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    print_numbers(i + 1, n);
}

int main()
{
    int n;
    scanf("%d", &n);

    print_numbers(1, n);

    return 0;
}
