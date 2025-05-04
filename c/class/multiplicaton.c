#include<stdio.h>
int main(){
    int a=[10][10], b=[10][10], result[10][10], r1, r2, c1, c2, i, j, k;
    printf("Enter the rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
     while(c1!=r2){
        printf("Error! No. of columns of the first matrix and no. of rows of the second matrix.\n\n");
        printf("Enter the rows and columns for the first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter the rows and columns for the second matrix: ");
        scanf("%d %d", &r2, &c2);
     }

     for (i=0; i<r1; i++){
        for (j=0; j<c1; j++){
            printf("Enter elements a %d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
     }

     for(i=0; i<r2; i++){
        for(j=0; j<r2; j++){
            printf("Enter elements b %d%d: ", i, j);
            scanf("%d", &b[i][j])
        }
     }

     for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            result[i][j]=0;
        }
     }

     for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            for(k=0; k<c1; k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
     }
     for(j=0; j<c2; j++){
        printf("%d", result[i][j]);
     }
     printf("\n\n");
     return 0;
}