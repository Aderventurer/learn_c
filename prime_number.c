#include<stdio.h>

// to check if N is prim number or not
void checkprime(int N){
    int flag = 1;
    for(int i = 2 ; i <= N/2 ; i++){
        if(N % i == 0){
            flag = 0;
            break;
        }
    }
    if (flag){
        printf("the num %d is a prime number",N);
    }
    else{
        printf("the number %d is not a prime number",N);
    }
}

int main(){
    int num;
    printf("enter a num:\n");
    scanf("%d",&num);
    checkprime(num);
    return 0;
}