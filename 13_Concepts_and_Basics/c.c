#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b); // input.txt থেকে মান নেওয়ার জন্য
    
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    
    return 0;
}