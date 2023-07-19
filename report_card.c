#include<stdio.h>
int main(){
    float x;
    printf("enter the gained percentage-");
    scanf("%f",&x);
    if(x>=90){
        printf("grade-A");
    }
   else if(x>=80){
        printf("grade-B");
    }
    else if(x>=70){
        printf("grade-C");
    }
    else if(x>=60){
        printf("grade-D");
    }
    else if(x>=50){
        printf("grade-E");
    }
    else if(x>=40){
        printf("grade-F");
    }
    else{
        printf("fail");
    }
    return 0;
}