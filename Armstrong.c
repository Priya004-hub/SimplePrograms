#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int num,sum=0,remp,temp;
    printf("Enter Number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        remp=num%10;
        sum=sum+pow(remp,3);
        num=num/10;

    }
    if(temp==sum){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong Number");

    }
    getch();
}