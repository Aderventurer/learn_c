#include<stdio.h>

void checkoddoreven(int N)
{
   int r = N % 2;
   if(r == 0)
   {
        printf("%d is a even",N);
   }
   else
   {
        printf("%d is a odd",N);
   }
}

int main()
{
    int N = 101 ;

    checkoddoreven(N);
    return 0;
}