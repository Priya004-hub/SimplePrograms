//Shot Alphabetical Order **
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    char name[50];
    char i,j;
    char temp[30];
     printf("Enter the Name :");
     scanf("%s",&name);
      
      for(i=0;i<strlen(name);i++){
        for(j=i+1;j<strlen(name);j++){
            if(name[i]>name[j]){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);

            }

        }
        
      }
      printf("Alphabetical Order :");
      for(i=0;i<strlen(name);i++){
        printf("%s",name[i]);
      }
      getch();
}