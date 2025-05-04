#include<stdio.h>
int main(){
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of the 1st matrix: ");
    scanf("%d %d", &r, &c);

    //storing the elements of the matrix
    printf("Entered matrix: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d", a[i][j]);
        }
    }
}