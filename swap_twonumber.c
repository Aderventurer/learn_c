#include<stdio.h>
int main()
{
    int x,y;
    printf("enter value of x");
    scanf("%d",&x);
    printf("\n enter value of y");
    scanf("%d",&y);
    int A = x;
    x = y;
    y = A;
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}
