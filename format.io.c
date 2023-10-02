#include <stdio.h>
int main()
{
   char ch = 'A';
   char str[20] = "wob.com";
   float flt = 10.234;
   int no = 150;
   double dbl = 20.123456;
   printf("字符为 %c \n", ch);
   printf("字符串为 %s \n" , str);
   printf("浮点数为 %0.4f \n", flt);
   printf("整数为 %d\n" , no);
   printf("双精度值为 %lf \n", dbl);
   printf("八进制值为 %o \n", no);
   printf("十六进制值为 %x \n", no);
   printf("Size of char is:%lu\n",sizeof(ch));
   printf("Size of String is:%lu\n",sizeof(str));
   printf("Size of Float is:%lu\n",sizeof(flt));
   printf("Size of Int is:%lu\n",sizeof(no));
   printf("Size of double is:%lu\n",sizeof(dbl));
   return 0;
}