#include<stdio.h>
int main(){
    float unit,total_amount, charge,subcharge;
    printf("enter the unit consumed");
    scanf("%f",&unit);
    if(unit<=50){
      charge=unit*0.5;  
    }
    else if(unit>50&&unit<100){
        charge=25+(unit-50)*0.75;
    }
    else if(unit>150&&unit<250){
        charge=100+(unit-150)*1.20;
    }
    else{
        charge=unit*1.50;
    }
    subcharge=charge+0.2*charge;
    total_amount=charge+subcharge;
    printf("total amount to be paid= %f",total_amount);

}