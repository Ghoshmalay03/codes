// //WAP to print the grade of the students as per their scored marks.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int marks;

//     printf("Enter your marks: ");         //Asks the user to enter their marks
//     scanf("%d", &marks);

//     if(marks>90 && marks<=100){
//         printf("The student has been awarded A+ grade.");       //print A+ for marks between 90-100
//     }
//     else if(marks>80 && marks<=90){
//         printf("The student has been awarded A grade.");        //print A for marks between 80-90
//     }
//     else if(marks>70 && marks<=80){
//         printf("The student has been awarded B+ grade.");       //print B+ for marks between 70-80
//     }
//     else if(marks>60 && marks<=70){
//         printf("The student has been awarded B grade.");        //print B for marks between 60-70
//     }
//     else if(marks>60 && marks<=50){
//         printf("The student has been awarded C+ grade.");       //print C+ for marks between 50-60
//     }
//     else if(marks>50 && marks<+40){
//         printf("The student has been awarded C grade.");        //print C for marks between 40-50
//     }
//     else if(marks>40 && marks<=30){
//         printf("The student has been awarded D+ grade.");       //print D+ for marks between 30-40
//     }
//     else if(marks>30 && marks<=20){
//         printf("The student has been awarded E grade.");        //print E for marks between 20-30
//     }
//     else{
//         printf("The student has been awarded F grade.");        //print F for marks between 0-20
//     }
//     return 0;
// }


// //WAP to check the age group
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int age;

//     printf("Kindly enter your age: ");      //Asks the user to enter their age
//     scanf("%d", &age);

//     age >= 18 ? printf("You are an adult. \n") : printf("You are a minor. \n");     //Ternary conditional operator
//     printf("Thank you");

//     return 0;
// }

//WAP to check if the number is a natural number or not
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number;

//     printf("Enter number: ");       //Asks the user to enter number
//     scanf("%d", &number);

//     if(number>0){
//         printf("%d is a natural number. \n", number);       //Checks for natural number
//     }
//     else{
//         printf("%d is not a natural number.", number);      //orelse non-natural
//     }
//     return 0;
// }

//WAP to check the current day using switch operator
#include<stdio.h>
#include<math.h>
int main(){
    int day;
    printf("Enter any number between 1 to 7: ");    //Asks the user to enter any number between 1 to 7
    scanf("%d", &day);

    switch(day){
        case 1 : printf("Today is Monday.");        //1 for Monday
        break;

        case 2 : printf("Today is Tuesday.");       //2 for Tuesday
        break;

        case 3 : printf("Today is Wednesday.");     //3 for Wednesday
        break;

        case 4 : printf("Today is Thursday.");      //4 for Thursday
        break;

        case 5 : printf("Today is Friday.");        //5 for Friday
        break;

        case 6 : printf("Today is Saturday.");      //6 for Saturday
        break;

        case 7 :printf("Today is Sunday.");         //7 for Sunday
        break;

        default : printf("Not a valid day");        //Not valid for other numbers
    }
    return 0;

}