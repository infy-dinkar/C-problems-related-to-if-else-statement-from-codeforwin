#include<stdio.h>
int main(){
    int x;
    printf("enter any number");
    scanf("%d",&x);
    if(x%5==0&&x%3==0){
        printf("number is divisible by both 3 and 5");
    }
    
return 0;

}