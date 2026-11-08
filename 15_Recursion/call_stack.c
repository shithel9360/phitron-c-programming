#include<stdio.h>
void mello() {
    printf("Hello\n");
}
void gelo()
{
    printf("Gelo\n");
    mello();
}
void hello()
{
    printf("Hello\n");
    gelo();
}
int main() {
    hello();
    return 0;
}