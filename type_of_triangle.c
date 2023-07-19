#include<stdio.h>
int main(){
    float side1,side2,side3;
    printf("enter side1-");
    scanf("%f",&side1);
    printf("enter side2-");
    scanf("%f",&side2);
    printf("enter side3-");
    scanf("%f",&side3);
    if(side1==side2&&side2==side3){
        printf("equilateral triangle");
    }
    else if(side1==side2||side2==side3||side3==side1){

    
        printf("isosceles triangle");
    }
    else{
        printf("scalan triangle");
    }
    return 0;
}