#include<stdio.h>
#include<conio.h>
void main(){
    int i,num,fact=1;
    printf("Enter the Number:");
    scanf("%d",&num);
    for(i=1li<=num;i++){
        fact=fact*i;
    }
    printf("Fact : %d",fact);
    getch();
}