// #include<stdio.h>           //C prograam to illustrate macros
// #define VALUE 31            //MACRO definition
// int main(){                 //Driver Code
//     printf("Value is: %d", VALUE);      //Print message
//     return 0;
// }

// #include<stdio.h>
// #define OUTER NESTVALUE
// #define NESTVALUE 100
// int  main(){
//     printf("We are learning chain macro with value: %d", OUTER);
//     return 0;
// }


// //Multi-line macro
// #include<stdio.h>
// #define ELE 1,\
// 2,\
// 3
// int main(){
//     int arr[]={ELE};
//     int i;
//     printf("Elements of array are: ");
//     for(i=0; i<3; i++){
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

//Function-Like Macro
#include<stdio.h>
#define min(a,b)(((a)<(b))?(a):(b))
int main(){
    int a=1;
    int b=2;
    printf("Minimum value between %d and %d is %d \n", a, b, min(a,b));
    return 0;
}