#include<stdio.h>
int main (){
    int a,b,c;
    printf("enter the value of first side");
    scanf("%d",&a);
    printf("enter the value of 2 angle");
    scanf("%d",&b);
    printf("enter the value of 3 angle");
    scanf("%d",&c);
    if(a+b>c&&b+c>a){
        printf(" traingle is possible");
    }
    else{
        printf("triangle not possible");
    }
    return 0;
}