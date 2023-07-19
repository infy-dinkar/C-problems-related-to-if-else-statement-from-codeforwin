#include<stdio.h>
int main(){
    float lenght,breath,area,perimeter;
    printf("enter the value of lenght");
    scanf("%f",&lenght);
    printf("enter the value of breath");
    scanf("%f",&breath);
    area=lenght*breath;
    printf("area=%f\n",area);
    perimeter=2*(lenght+breath);
    printf("perimeter=%f\n",perimeter);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }
    if(area<perimeter){
        printf("perimeter is greater");
    }
return 0;


}