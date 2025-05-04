#include<stdio.h>
int main(){
    int a[50], n, loc=-1, key, beg, last, mid, i;
    printf("Enter number of array elements: \n");
    scanf("%d", &n);
    printf("Enter array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    beg=0;
    last=n-1;
    printf("Enter integer value to search in sorted array: ");
    scanf("%d", &key);
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(a[mid]==key){
            loc=mid;
            break;
        }
        else if(a[mid]>key){
            last=mid-1;
        }
        else if(a[mid]<key){
            beg=mid+1;
        }
    }
    if(loc!=1){
        printf("Element not found at %d", loc+1);
    }
    else{
        printf("Element not found");
    }
    return 0;
}