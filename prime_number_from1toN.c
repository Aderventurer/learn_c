#include<stdbool.h>
#include<stdio.h>
bool isprime(int n)
{
    if(n == 1 || n == 0)
    {
        return false;
    }
    for(int i = 2;i <= n/2;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
} 

int main()
{
    int N = 100;
    for(int i = 1;i <= N;i++)
    {
        if (isprime(i))
        {
            printf("%d",i);

        }
    } 
    return 0;
}