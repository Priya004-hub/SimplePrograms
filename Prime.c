#include<stdio.h>
#include<conio.h>
void main(){
    int num,count=0,i=1;
    printf("Enter the Number:");    //num=2 , is prime
    scanf("%d",&num);  
    while(i<=num){      //1<=2
        if(num%i==0){   //2%2==0
            count++;    // 2
        }
        i++;            //2
    }
        if(count==2){
            printf("The Given Number is PRIME Number");
        }else{
            printf("The Given Number is NOT PRIME Number");
        }
    
    getch();
}