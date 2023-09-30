#include<stdio.h>
int main(){
    int num;
    printf("enter a num:\n");
    scanf("%d",&num);
    int flag = 1;
    for(int i = 2 ; i <= num/2 ; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }
    if (flag){
        printf("the num is a prime number");
    }
    else{
        printf("the number is not a prime number");
    }
        
    return 0;


}