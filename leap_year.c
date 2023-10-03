#include<stdbool.h>
#include<stdio.h>

bool checkyear(int year);
bool checkyear(int year)
{
    if(year % 400 == 0)
    {
        return true;
    }
    else if(year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int year = 2000;
    if(checkyear(year))
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }
    return 0;
}

