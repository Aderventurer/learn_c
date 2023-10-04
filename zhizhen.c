#include<stdio.h>

void swap(double * , double * );

int main ()
{
double a_out = 5.0;
double b_out = 6.0;

printf("address of a_out = %p\n", &a_out);
printf("address of b_out = %p\n", &b_out);

// 指针类型, 指向 double 的指针，pointer
double * p_a = &a_out;
double * p_b = &b_out;
printf("p_a = %p\n", p_a);
printf("size of p_a = %lu\n", sizeof(p_a));
printf("size of a_out = %lu\n", sizeof(a_out));

swap(p_a,p_b);
printf("a=%f b=%f\n", a_out, b_out);
return 0;
}

void swap(double * a, double * b)
{
    int t = *a;
    *a = *b;
    *b = t;
}