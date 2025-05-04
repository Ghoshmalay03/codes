// #include<stdio.h>
// struct Address{
//     char HouseName[25];
//     char city[20];
//     char streetname[20];
// };
// struct Employee{
//     int id;
//     char Name[25];
//     float salary;

//     struct Address Add;
// };
// int main(){
//     struct Employee E;
//     printf("Enter Employee id: ");
//     scanf("%d", &E.id);
//     printf("Enter Name: ");
//     scanf("%s", &E.Name);
//     printf("Employee salary: ");
//     scanf("%f", &E.salary);
//     printf("Enter Employee HouseName: ");
//     scanf("%s", &E.Add.HouseName);
//     printf("Enter Employee City: ");
//     scanf("%s", &E.Add.city);
//     printf("Enter StreetName: ");
//     scanf("%s", &E.Add.streetname);
//     printf("Details-\n");
//     printf("Employee name: %s \n", E.Name);
//     printf("ID: %d \n", E.id);
//     printf("Salary: %f \n", E.salary);
//     printf("HouseName is: %s\n", E.Add.HouseName);
//     printf("City: %s \n", E.Add.city);
//     printf("StreetName: %s \n", E.Add.streetname);

//     return 0;
// }

// #include<stdio.h>
// struct Employee{
//     char ename[25];
//     int ssn;
//     float salary;
//     struct dob{
//         int date;
//         int month;
//         int year;
//     }db1;
// }emp={"Aniket", 1000, 1000.50,{22,6,1990}};

// int main(){
//     printf("Enter Name: %s", emp.ename);
//     printf("Employee ssn: %d", emp.ssn);
//     printf("Employee salary: %.2f", emp.salary);
//     printf("Employee DOB: %d%d%d", emp.db1.date, emp.db1.month, emp.db1.year);

//     return 0;
// }

//WAP to create a nesting structure named as studen_info having data members name, roll no., and city, create another nested structure named as student marks having data two members to store TGPA of first and second semester and display the whole information
#include<stdio.h>
struct student_info{
    char name[25];
    int roll;
    char city[20];
};
struct student_marks{
    float TGPA;
    float first;
    float second;

    struct student_info S;
};

int main(){
    struct student_marks Stu;
    printf("Enter name: ");
    scanf("%s", &Stu.S.name);
    printf("Roll no: ");
    scanf("%d", &Stu.S.roll);
    printf("Enter city: ");
    scanf("%s", &Stu.S.city);
    printf("Enter TGPA: ");
    scanf("%.2f", &Stu.TGPA);
    printf("Enter 1st: ");
    scanf("%.2f", &Stu.first);
    printf("Enter second: ");
    scanf("%f", &Stu.second);

    printf("name is %s \n", Stu.S.name);
    printf("Roll is %d \n", Stu.S.roll);
    printf("City is %s \n", Stu.S.city);
    printf("TGPA is %.2f", Stu.TGPA);
    
    return 0;
}