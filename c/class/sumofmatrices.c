#include<stdio.h>
int main(){
    int a[3][3], b[3][3], sum[3][3], i, j;
    printf("Enter the element of the 1st matrix \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter a[%d][%d]: \t", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the element of 2nd matrix \n");
    for (i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Enter b[%d][%d]: \t", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //addition of the two matrices
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    //Displaying the sum
    printf("Sum of the matrices: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}