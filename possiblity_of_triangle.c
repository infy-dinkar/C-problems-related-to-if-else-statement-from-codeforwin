#include<stdio.h>
int main(){
    float side1,side2,side3;
    printf("enter length of side1-");
    scanf("%f",&side1);
    printf("enter the length of side2-");
    scanf("%f",&side2);
    printf("enter the length of side3-");
    scanf("%f",&side3);
    if(side1+side2>side3){
        printf("traingle is possible");
    }
    else if(side2+side3>side1){
        printf("traingle is possible");
    }
    else if(side3+side1>side2){
        printf("traingle is possible");
    }
    else{
        printf("not possible");
    }
    return 0;
}