#include<stdio.h>
int main(){
    float x;
    printf("enter your basic salary");
    scanf("%f",&x);
    if(x<=10000){
        printf("%f final salary",(0.2*x+0.8*x)+x);
    }
    else if(x<=20000){
        printf("%f final salary",(0.25*x+0.9*x)+x);
    }
    else{
        printf("%f final salary",(0.3*x+0.95*x)+x);
    }
    return 0;
    
}