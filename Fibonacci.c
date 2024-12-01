//  Fibonnaci Series Interview Question
#include<stdio.h>
#include<conio.h>
void  main(){
    int i,sum,num;
    int num1=-1,num2=+1;
    printf("Enter the Number:");    //Num=3
    scanf("%d",&num);
    for(i=1;i<=num;i++){    //i=1;1<=3--> T
        sum=num1+num2;             //sum=-1+1=0
        printf(" %d ",sum);   // 0 , 1 , 1
        num1=num2;          //num1=1,num2=0,Restore and continue
        num2=sum;
    }
    
    getch();
}