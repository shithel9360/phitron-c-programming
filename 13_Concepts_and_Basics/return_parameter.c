#include <stdio.h>


    int sum(int num1, int num2)
    {   printf("The sum of %d and %d is: ", num1, num2);
        int ans = num1 + num2;
        return ans;
    }
    
   int main()
    {
        sum(200, 300);
        return 0;
    }
    
