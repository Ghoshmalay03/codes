// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the final number: ");
//     scanf("%d", &n);

//     for(int i=0; i<=n; i++){
//         printf("%d \t", i);
//     }
//     return 0;
// }


//WAP to print the sum of the user-defined sequence of the number...
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the final number: ");      //Asks the user for the range
//     scanf("%d", &n);

//     int sum = 0;
//     for(int i=1; i<=n; i++){                 //for(initialize; condition; updation) is used to provide the condition
//         sum=sum+i;
//         printf("%d \n", i);
//     }
//     printf("So, the sum is %d", sum);            //prints the sum

//     for(int i=n; i>=1; i--){                     //reverses the sequence
//         sum=sum-i;                               
//         printf("%d \n", i);                      //prints the sum of the reverse sequence
//     }
//     printf("So, the subtraction is %d.", sum);           //prints the substraction of the sequence
//     return 0;
// }


//WAP to check if the user entered number is a multiple of 7 or not...
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;

//     do{                                      //do-while
//         printf("Enter number: ");
//         scanf("%d", &n);
//         printf("%d is a multiple of 7. \n", n);

//         if(n % 7 != 0){                  //if-condition checks if the number is divisible by 7 or not
//             break;
//         }
//     } while(1);{                                         //if the if-condition fails the loop ends
//         printf("%d is not a multiple of 7. \n", n);
//         printf("Thank you.");
//     }
//     return 0;
// }

// //WAP to print the table of the user entered number upto 10.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter number: ");          //Asks the user to enter a number of which they want to calculate the table.
//     scanf("%d", &n);
//     printf("So, the table of %d is - \n", n);       //Beginning line
//     for(int i=1; i<=10; i++){                       //for loop...
//         printf("%d x %d = %d \n", n, i, n*i);       //provides some additional features...
//     }
//     return 0;
// }

// //WAP to print all the number b/w n to 10, but avoid 7 from the sequence...
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the initial number: ");       //Asks the user to enter the initial number 
//     scanf("%d", &n);
//     for(int i=n; i<=10; i++){           //loop created
//         if(i==7){                   //skip
//             continue;
//         }
//         printf("%d \t", i);         //prints the sequence, except 7
//     }
//     return 0;
// }

// WAP to print the factorial of a number 
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int factorial = 1;
    for(int m=n; m>=1; --m){
        factorial=factorial*m;
    }
    printf("So, the factorial of %d is %d", n, factorial);
    return 0;
}

////WAP to print the sum of all numbers b/w 5 and n including 5 and n...
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter numbe : ");       //Asks the user to enter number.
//     scanf("%d", &n);
//     int sum = 0;
//     for(int i=5; i<=n; i++){
//         sum = sum + i;
//     }
//     printf("So, the sum between 5 and %d is %d", n, sum);
//     return 0;
// }

// //WAP to check whether the entered number is prime or not...            //INCOMPLETE.........
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     if(n % n == 0 && n % 1 == 0){
//         printf("The entered number is a prime number.");
//     } else{
//         printf("The entered number is not a prime number.");
//     }
//     return 0;
// }