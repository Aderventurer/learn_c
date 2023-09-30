#include <stdio.h>
int main()
{
    char x = 'a';
    for (int i = 0; i < 26; i++)
    {
        printf("The ASCII value of %c is %d \n", x, x);
        x++;
    }
    return 0;
}
