#include<stdio.h>
int main()
{   int A;
    printf("enter a number A:");
    scanf("%d",&A);
    if(A > 0)
    {
        printf("%d is positive",A);
    }
    else if(A < 0)
    {
        printf("%d is negetive",A);
    }
    else if(A == 0)
    {
        printf("%d is zero",A);
    }
    return 0;   
}