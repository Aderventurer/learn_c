#include<stdio.h>
int main(){
    int a = 1;
    int i = 0;
    do{a = a+i;i = i+1;}while(i<=100);
    printf("a=%d",a);
    return 0;

}