#include<stdio.h>
int main(){
    char ch;
    printf("enter day number");
    scanf("%c",&ch);
    if(ch=='1'){
        printf("monday");}
        else if (ch=='2'){
            printf("tuesday");}
            else if( ch=='3'){
                printf("wednesday");
            }
else if(ch=='4'){
    printf("thrusday");
}
else if(ch=='5'){
    printf("friday");
}
else if(ch=='6'){
    printf("saturday");
}
else{
    printf("sunday");
}
        
    }
