#include<stdio.h>
int main(){
    int x;
    printf("enter any number");
    scanf("%d",&x);
    if( x%5==0){
        printf("divisible by 5");
    }
    if(x%5!=0){
        printf("not divisible by 5");
    }
    return 0;
}
