#include <stdio.h>
float multiply(float a, float b)
{
    return a * b;
}
int main()
{
    float A = 2.12, B = 3.88, product;
    product = multiply(A, B);
    printf("Product of 2.12 and 3.88 is:%.3f", product);
    return 0;
}