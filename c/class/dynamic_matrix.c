//WAP to ask the user to enter the number of rows and columns for the matrix 1, also ask the user to enter rows and columns for matrix 2 if rows and columns of th first matrix is equals to rows and columns of the second matrix then perform subtraction of, else display a mssge to the user "TRY AGAIN".
#include<stdio.h>
int main(){
    int x1,y1,x2,y2;
    printf("Enter rows and columns for matrix 1: ");
    scanf("%d %d",&x1,&y1);

    printf("Enter rows and columns for matrix 2: ");
    scanf("%d %d",&x2,&y2);
    if(x1==x2 && y1==y2){
        float a[x1][y1],b[x2][y2],c[x1][y1];
        int i,j;
        printf("Enter elements of 1st matrix: ");
        for(i=0; i<x1; i++){
            for(j=0; j<y1; j++){
                scanf("%f", &a[i][j]);
            }
        }
        
        printf("Enter elements of 2nd matrix: ");
        for(i=0; i<x2;i++){
            for(j=0; j<y2; j++){
                scanf("%f", &b[i][j]);
            }
        }

        for(i=0; i<x1; i++){
            for(j=0; j<y1; j++){
                c[i][j]=a[i][j]-b[i][j];

            }
        }
        for(int i=0; i<x1; i++){
            for(j=0; j<y1; j++){
                printf("%f", c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("TRY AGAIN!");
    }

}