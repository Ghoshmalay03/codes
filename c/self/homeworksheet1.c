// #include<stdio.h>
// int main(){
    
//     //perimeter of rectangle
//     int length, breadth, perimeter;

//     printf("Enter the length of the rectangle: ");  //Length of the rectangle
//     scanf("%d", &length);                           //stores the user-entered value    
    
//     printf("Enter the breadth of the rectangle: ");     //Breadth of the rectangle
//     scanf("%d", &breadth);                              //Stores the user-entered value

//     perimeter=length*breadth;                                   //perimeter of the rectangle 
//     printf("Perimeter of the rectangle is %d.", perimeter);      //prints the perimeter of the rectangle

//     return 0;
// }


// #include<stdio.h>
// int main(){

//     //cube of a number
//     int number, cube;
//     printf("Enter a number: ");     //Asks a number from the user
//     scanf("%d", &number);            //stores the user-entered number

//     cube=number*number*number;                          //cube of the number
//     printf("The cube of the number is %d.", cube);      //prints the cube of the number

//     return 0;
// }

#include<stdio.h>
int main(){

    //coversion of fahrenheit to celsius
    float fahrenheit, celsius;

    printf("Enter temperature in Farenheit: ");     //asks user to enter the degree in Farenheit
    scanf("%f", &fahrenheit);                       //stores the user-entered value

    celsius = (fahrenheit - 32) * 5 / 9;                                                        //conversion of fareheit to celsius
    printf("%.2f degree Fahrenheit is equal to %.2f degree Celsius.", fahrenheit, celsius);     //prints the temperature in celsius

    return 0;
}