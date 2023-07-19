#include<stdio.h>
int main(){
    char ch;
    printf("enter month number");
    scanf("%c",&ch);
    if(ch=='1' || ch=='3' || ch=='5'|| ch=='7' || ch=='8'|| ch=='10' || ch=='12'){
        printf("31 days");
    }
    else if( ch=='4'||ch=='6'|| ch=='9'|| ch=='11'){
        printf("30 days");
    }
    else{
        printf("28/29 days");
    }
}