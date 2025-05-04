//WAP to ask the user to press 1 to find the sum of 1D array elements, press 2 to find the min and max elements from 1D array, press 3 to find sum of two matrix, press 4 for substraction odf two matrix, press 5 to find the sum of left diagonal matrix, press 6 for ri8 diagonal sum and press 7 for transpose of matrix. Make sure after performng any of these operation the compiler should reach back to the menu again.
#include<stdio.h>
int main(){
    int response, sum, min_max, sum_matrices, sub_matrice, sum_left_diagonal, sum_right_diagonal, transpose_matrix;
    printf("Press 1 to find the sum of the 1D array \t");
    printf("Press 2 to find the minimum and maximum elements from 1D array \n");
    printf("Press 3 to find the sum of the two matrices \t");
    printf("Press 4 to find the substration of the two matrices \n");
    printf("Press 5 to find the sum of the letf diagonal \t");
    printf("Press 6 to find the sum of the right diagonal \n");
    printf("Press 7 to find the transpose of the matrix \n");
    scanf("%d", &sum);
    scanf("%d", &min_max);
    scanf("%d", &sum_matrices);
    scanf("%d", &sub_matrice);
    scanf("%d", &sum_left_diagonal);
    scanf("%d", &sum_right_diagonal);
    scanf("%d", &transpose_matrix);
    return 0;
}