#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    int result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("The Factorial of %d is %d.\n", num, result);
    return 0;
}
int factorial(int num)
{
    if (num ==0||num == 1)
        return 1;
    else
        return(num * factorial(num - 1));
}
