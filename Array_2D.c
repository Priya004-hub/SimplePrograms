#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int a1[50][50];
    int a2[50][50];
    int i,j,intial=0;
    int row, column,sum;
    printf("Enter the Row :");
    scanf("%d",&row);
    printf("Enter the Column:");
    scanf("%d",&column);

     printf("Enter the Element of First Array \n");
     for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter the Element [%d][%d]: ",i,j);
            scanf("%d ",&a1[i][j]);
        }
    }
     printf("Enter the Element of Second Array \n");
     for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Enter the Element [%d][%d]: ",i,j);
            scanf("%d ",&a2[i][j]);
        }
     }
    printf("1st Array Element of this matrix is...\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d",a1[i][j]);
        }
        printf("\n");
        
    }
       printf("2nd Array Element of this matrix is...\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d",a2[i][j]);
        }
        printf("\n");
        
    }

    //sum
    printf("Sum of the two matrix...\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
                printf("The sum of Matrix.. %d",a1[i][j]+a2[i][j]);

        }
        printf("\n");
    }
    getch();
}