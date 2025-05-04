#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array;
    int size;

    printf("enter the size of the array: ");
    scanf("%d", &size);

    array=(int *)malloc(size *sizeof(int));
    if(array==NULL){
        printf("the array is empty");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        array[i]=i;
        printf("%d", array[i]);
    }

    return 0;
    
}