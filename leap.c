#include<stdio.h>
int main(){
    int x;
    printf("enter year");
    scanf("%d",&x);
    if(x%4==0){
        printf("its a leap year");}
        if(x%5!=0){
            printf("not a leap year");
        }
        return 0;


    

}