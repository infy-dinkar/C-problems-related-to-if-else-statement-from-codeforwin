#include<stdio.h>
int main(){
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    if(x%5==0&&x%11==0){
        printf("number is divisible by both 5&11");
    }
    else{
        printf("not divisible");
    }
}