#include<stdio.h>
int main(){
    char ch;
    printf("enter any character");
    scanf("%c" ,&ch );
    if((ch>='a'&& ch<='z' ) || ( ch>='A'&& ch<='Z')){
    printf("its alphabet");
    }
    else if(ch>='0'&&ch<='9'){
        printf("it a number");
    }
    else{
        printf("special character");
    }
}