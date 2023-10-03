#include<stdio.h>

// return max integer among a,b,c
int compare_max_in_three(int a, int b, int c);
int compare_max_in_three(int a, int b, int c)
{
    if(a > b)
    {
        if(a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
    int x = 3,y = 4,z = 5;
    
    printf("%d is the largest number",compare_max_in_three(x,y,z));
    return 0;

}