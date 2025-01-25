// Lowest Number by using Array 
#include<stdio.h> 
#include<conio.h>
void main(){
    int num, arr[50];
    int min=0;
    int i;
    printf("Enter the Number: ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
        printf("Enter the Elements [%d] :",i);
        scanf("%d",&arr[i]);
    }
    min=arr[0]; //minimum value
    for(i=1;i<num;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    }
   printf("the Lowest number is %d",min);
 
    getch();
}