#include<stdio.h>
#include<conio.h>
void main(){
    int num,sum=0;
    int remp,temp;
    printf("Enter the Number:");
    scanf("%d",&num);
    temp=num;       // num value is constantly stored by temp variable.
    while(num>0){
        remp=num%10;
        sum=(sum*10)+remp;
        num=num/10;
    }
    if(temp==sum){
        printf("Palindrome Number");

    }else{
        printf("Not Palindrome Number");
    }
    getch();
}