#include<stdio.h>
int main()
{
    int i = 0,sum = 0,n = 10;
    while(i <= n)
    {
        sum = i + sum;
        i++;
    }
    printf("%d",sum);
    return 0;
}