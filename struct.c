#include<stdio.h>
struct complexNumber {
    float real;
    float img;
};

typedef struct complexNumber Complex;
Complex add_two_complex(Complex a,Complex b);
Complex multiply_two_complex(Complex a,Complex b);

int main()
{
    Complex a,b,sum,product;
    a.real = 2.4;
    a.img = 3.2;
    b.real = 4.5;
    b.img = 5.3;
    sum = add_two_complex(a,b);
    product = multiply_two_complex(a,b);

    printf("a = %f+%fi\n",a.real,a.img);
    printf("b = %f+%fi\n",b.real,b.img);
    printf("sum = %f + %fi\n",sum.real,sum.img);
    printf("product = %f + %fi\n",product.real,product.img);
    return 0;
}

Complex add_two_complex(Complex a,Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.img = a.img + b.img;
    return sum;


}
Complex multiply_two_complex(Complex a,Complex b)
{
    Complex pro;
    pro.real = a.real*b.real-a.img*b.img;
    pro.img =a.real*b.img+a.img*b.real;
    return pro;
}





