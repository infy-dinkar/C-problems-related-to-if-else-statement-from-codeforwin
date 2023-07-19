#include<stdio.h>
int main(){
    char ch;
    printf("enter the alphabet_");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'|| ch=='i' || ch=='o' || ch=='u' ||
     ch=='A'||ch=='I'||ch=='O'|| ch=='U'||ch=='E'){
        printf("vowel");
     }
      else if(( ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        printf("consonant");
      }
      else{
      printf("not a alphabet '%c'",&ch);}
      return 0;
}