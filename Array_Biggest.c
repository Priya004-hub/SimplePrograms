// Print a Biggest Number Using Array 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int num,i, temp;
    int arr[50];
    printf("Enter the Number:");
    scanf("%d", &num);

    for(i=0;i<num;i++){
        printf("Enter the Element [%d] :",i);
        scanf("%d",&arr[i]);
    }

        temp=arr[0];
        for(i=1;i<num;i++){    
            if(temp<arr[i])
                temp=arr[i];
    }
        printf("The Greatest Number is to be : %d",temp);

    getch();
        }