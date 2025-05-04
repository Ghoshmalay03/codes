// #include<stdio.h>
// int main(){
//     char str1[20], str2[10];
//     int x;
//     printf("enter first string: ");
//     gets(str1);
//     printf("enter second string: ");
//     gets(str2);
//     x=stricmp(str1,str2);
//     if (x==0)
//     {
//         printf("Strings are equal");
//     }
//     else if (x>0)
//     {
//         printf("First string is greater than second strings");
//     }
//     else{
//         printf("First string is less than the second string");
//     }
//     return 0;
// }

// //itoa()-Program Example
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int a=123;
//     char str[100];
//     itoa(a,str,2);
//     printf("Binary value: %s \n", str);
//     itoa(a, str, 10);
//     printf("Decimal value: %s \n", str);
//     itoa(a, str, 16);
//     printf("Hexadecimal value: %s \n", str);
//     itoa(a, str, 8);
//     printf("Octal value: %s", str);
//     return 0;
// }

// #include<stdio.h>
// struct car{
//     char name[50];
//     int seats;
//     float price;
// };
// main(){
//     struct car myCar;
//     printf("Enter the name of your car: ");
//     gets(myCar.name);
//     printf("Enter the number of seats in your car: ");
//     scanf("%d", &myCar.seats);
//     printf("Enter the price of your car: ");
//     scanf("%f", &myCar.price);
//     printf("Particulars of the car are- \n");
//     printf("Car name: %s \n", myCar.name);
//     printf("Number of seats: %d \n", myCar.seats);
//     printf("Price: %f \n", myCar.price);
//     //endmain
// }

//WAP to create a structure named as student and structure variables as name, roll no., CGPA, use them to store the record of 5 students and then display also but without using array of structure variable...
#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float CGPA, marks1, marks2, total;
};

main(){
    struct student stuinfo1;
     printf("Enter record of student 1 \n");
    printf("Enter your name: ");
    gets(stuinfo1.name);
    printf("Enter your roll no.: ");
    scanf("%d", &stuinfo1.roll);
    printf("Enter your CGPA: ");
    scanf("%f", &stuinfo1.CGPA);
    printf("Enter your marks- \n");
    printf("C: ");
    scanf("%f", &stuinfo1.marks1);
    printf("DBMS: ");
    scanf("%f", &stuinfo1.marks2);
    printf("Students information- \n");
    printf("Name of the student is %s \n", stuinfo1.name);
    printf("Roll no. of %s is %d \n", stuinfo1.name, stuinfo1.roll);
    printf("CGPA of %s is %f \n", stuinfo1.name, stuinfo1.CGPA);
    stuinfo1.total=stuinfo1.marks1+stuinfo1.marks2;
    printf("Total marks is %f", stuinfo1.total);

    struct student stuinfo2; 
    printf("Enter record of student 2 \n");
    printf("Enter your name: ");
    gets(stuinfo2.name);
    printf("Enter your roll no.: ");
    scanf("%d", &stuinfo2.roll);
    printf("Enter your CGPA: ");
    scanf("%f", &stuinfo2.CGPA);
    printf("Students information- \n");
    printf("Name of the student is %s \n", stuinfo2.name);
    printf("Roll no. of %s is %d \n", stuinfo2.name, stuinfo2.roll);
    printf("CGPA of %s is %f \n", stuinfo2.name, stuinfo2.CGPA);
}
