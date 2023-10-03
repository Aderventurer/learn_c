#include<stdio.h>
int main()
{
    for(int n = 1;n <= 9;n++)
    {
        for(int i = 1;i <= n;i++)
        {
            printf("%d * %d = %d\t",n,i,n*i);
        }
        printf("\n");
    }
    return 0;
}