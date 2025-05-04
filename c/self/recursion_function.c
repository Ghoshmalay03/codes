// #include<stdio.h>
// #include<math.h>

// void printHW(int count);

// int main(){
//     printHW(5);
//     return 0;
// }

// void printHW(int count){
//     if(count == 0){
//         return;
//     }
//     printf("Hello world... \n");
//     printHW(count - 1);
// }

#include<stdio.h>
#include<math.h>

int sum(int n);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("Sum is %d...", sum(n));
    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    int sm1 = sum(n-1);
    int sn = sum(n-1) + n;
    return sn;
}

// #include<stdio.h>
// #include<math.h>

// int fact(int n);

// int  main(){
//     int n;
//     printf("Enter number : ");
//     scanf("%d", &n);

//     printf("Factorial of the number is %d", fact(n));
//     return 0;
// }

// int fact(int n){
//     if(n == 1){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factN = fact(n-1) * n;
//     return factN;
// }

// #include<stdio.h>
// #include<math.h>

// int Fib(int n);

// int main(){
//     int n;

//     printf("Enter number for Fibonacci series: ");
//     scanf("%d", &n);

//     printf("Fibonacci series of %d is %d...", n, Fib(n));

//     return 0;
// }

// int Fib(int n){
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }
//     int FibNm1 = Fib(n-1);
//     int FibNm2 = Fib(n-2);
//     int FibN = FibNm1 + FibNm2;

//     return FibN;
// }


// //Write a function to print the sum of digit of a number...
// #include<stdio.h>
// #include<math.h>

// int sum(int n);

// int  main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     printf("Sum of %d is %d", sum(n));

//     return 0;
// }

// int sum(int n){
//     int sumnm1 = (n-1);
//     int sumn = sumnm1 + n;

//     return sumn;
// }

// //Write a function to print the square root of a number...
// #include<stdio.h>
// #include<math.h>

// int square(int n);

// int  main(){
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     printf("Square of the number is %d", pow(n, 2));
//     return 0;
// }

// int square(int n){
//     if(n == 0){
//         return 0;
//     }
//     int square = n*n;
//     return square;
// }