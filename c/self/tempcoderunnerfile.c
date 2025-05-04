#include<stdio.h>
#include<math.h>
int main(){
    int n;

    do{
        printf("Enter number: ");
        scanf("%d", &n);
        printf("%d is a multiple of 7. \n", n);

        if(n % 7 != 0){
            break;
        }
    } while(1);{
        printf("%d is not a multiple of 7. \n", n);
        printf("Thank you.");
    }
    return 0;
}