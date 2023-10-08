#include <stdio.h>
 
int main()
{
    int s = 1, e = 500, num1, n, arm = 0, 
          i, num2, c;
    for (i = s; i <= e; i++) {
        num1 = i;
        num2 = i;
        while (num1 != 0) {
            num1 = num1 / 10;
            ++c;
        }
 
        // Finding the armstrong number
        while (num2 != 0) {
            n = num2 % 10;
            int pow=1;
            for(int i=1;i<=c;i++)
            pow= pow*n;
            arm = arm + (pow);
            num2 = num2 / 10;
        }
        if (arm == i) {
            printf("%d\n", i);
        }
        arm = 0;
        c = 0;
    }
    return 0;
}
