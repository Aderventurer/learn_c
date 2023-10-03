#include<stdio.h>
int prive1 = 1;
int prive2 = 0;
void Fibonacci(int n)
{
    if(n < 3)
    {
        return;
    }
    int fn = prive1 + prive2;
    prive2 = prive1;
    prive1 = fn;
    printf("%d  ",fn);
    return Fibonacci(n-1);
}

void printFibnacci(int n)
{
    if(n < 1){
        printf("Invalid number of terms\n");
    }
    else if(n == 1){
        printf("0");
    }
    else if(n == 2){
        printf("0,1,");
    }
    else{
        printf("0,1,");
        Fibonacci(n);
    }
    return;
    
}

int main()
{
    int n = 9;
    printFibnacci(n);
    return 0;
}
