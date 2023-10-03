#include<stdio.h>
void multiplication(int n)
{
    for(int i = 1;i <= n;i++)
    {
        printf("%d * %d = %d\t",n,i,n*i);
        
    }

}


int main()
{
    int n = 1;
    for(n = 1;n <= 9;n++)
    {

    
    multiplication(n);
    printf("\n");
    
    }
    return 0;
}