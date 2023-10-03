#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    double a,b;
    while(1)
    {
        printf("enter an operater(+,-,*,/),if want to exit press x:\n");
        scanf(" %c",&ch);

        if(ch == 'x')
        {
            exit(0);
        }
        printf("Enter two first and second operand:\n");
        scanf("%lf,%lf",&a,&b);
        switch (ch)
        {
        case '+':
            printf("%lf + %lf = %lf",a,b,a+b);
            break;
        case '-':
            printf("%lf - %lf = %lf",a,b,a-b);
            break;
        case '*':
            printf("%lf * %lf = %lf",a,b,a*b);
            break;
        case '/':
            printf("%lf / %lf = %lf",a,b,a/b);
            break;
        
        default:
            printf("Error! please write a valid operator");
            break;
        }
        printf("\n");

    }
}