#include<stdio.h>
unsigned int factorial(unsigned int n)
{
    int result = 1;
    for(int i = 2;i <= n;i++)
    {
        result *=i;
    }
    return result;
}
int main()
{
    unsigned int N = 10;
    unsigned int multiply = factorial(N);
    printf("%d的阶乘为%d",N,multiply);
}