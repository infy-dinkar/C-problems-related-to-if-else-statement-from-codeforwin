#include<stdio.h>
int main(){
    float selling_price,cost_price;
    printf("enter selling price-");
    scanf("%f",&selling_price);
    printf("enter cost price-");
    scanf("%f",&cost_price);
    if(selling_price>cost_price){
        printf("profit");
    }
    else{
        printf("loss");
    }
}