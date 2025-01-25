// Ascending Order
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int arr[50];
    int i,j,num,temp;
    printf("Enter the Element Count :");
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
        printf("Enter element array[%d]: ",i);
        scanf("%d", &arr[i]);

    }
    printf("Array :");
    for(i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
    
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
        printf("\n Ascending order :");
        for(i=0;i<num;i++){
            printf("%d ",arr[i]);
        }
        
    
    getch();
    }
