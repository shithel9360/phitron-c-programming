#include <stdio.h>

int sum(int num1, int num2)
{
    printf("The sum of %d and %d is: ", num1, num2);
    int ans = num1 + num2;
    return ans;
}

int main()
{
    int ans = sum(200, 300);
    printf("%d\n", ans);
    return 0;
}
