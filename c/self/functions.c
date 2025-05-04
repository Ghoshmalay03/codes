// #include<stdio.h>
// #include<math.h>

// void printHello();      //function declaration/prototype
// void Goodbye();

// int main(){             //function call
//     printHello();
//     Goodbye();
//     Goodbye();
// }

// void printHello(){              //function definition
//     printf("Hello! \n");
// }
// void Goodbye(){
//     printf("Goodbye :-)... \n");
// }

//WAP to asks the user to press 'i' to print "Namaste" and press 'f' for "Bonjour"...
// void namaste();         //Function declaraion/prototype
// void bonjour();

// int main(){                 //Function call
//     char a;
//     printf("Press 'I' for Indian and 'F' for French: ");
//     scanf("%c", &a);
//     if(a == 'I'){
//         namaste();
//     } else{
//         bonjour();
//     }
//     return 0;
// }

// void namaste(){                     //Funciton definition
//     printf("Namaste \n");
// }
// void bonjour(){
//     printf("Bonjour \n");
// }

// #include<stdio.h>
// #include<math.h>
// //Function declarations
// void city();
// void name();

// //Function call;
// int main(){
//     int n;

//     printf("Press 1 for city and 2 for name: ");
//     scanf("%d", &n);
//     if(n==1){
//         city();
//     } else{
//         name();
//     }
//     return 0;
// }

// //Function defination
// void city(){
//     printf("You belong from heaven...");
// }
// void name(){
//     printf("Your name is Malay...");
// }



// #include<stdio.h>
// #include<math.h>
//
// //function declaration
// void printTable(int n);
//
// //function call(we will call the function)
// int main(){
//     int n;
//
//     printf("Enter number : ");
//     scanf("%d", &n);
//
//     printTable(n);          //n = argument/actual parameter...
//
//     return 0;
// }
//
// //funtion definition
// void printTable(int n){     //int n is parameter/formal parameter...
//     for(int i=1; i<=10; i++){
//         printf("%d x %d = %d \n", n, i, n*i);
//     }
// }

// #include<stdio.h>
// #include<math.h>

// void sum(int a, int b);

// int main(){
//     int a, b;

//     printf("Enter first number: ");
//     scanf("%d", &a);
//     printf("Enter second number: ");
//     scanf("%d", &b);

//     sum(a,b);
//     printf("Sum is %d", a+b);

//     return 0;
// }

// void sum(int a, int b){
//     return a + b;
// }

// #include<stdio.h>
// #include<math.h>

// void price(float n);        //function declaration

// int main(){                 //function call
//     float n;

//     printf("Enter price: ");
//     scanf("%f", &n);

//     printf("Original price: %.2f \n", n);

//     price(n);
//     return 0;
// }

// void price(float n){            //function definition
//     n = n + (0.18*n);
//     printf("Final price with GST is %.2f", n);
// }

// //Write function to calculate the area of a circle, a square and a rectangle...
// #include<stdio.h>
// #include<math.h>

// void areaCircle(int radius);             //function declaration
// void areaSquare(int side);
// void areaRectangle(int length, int breadth);

// int main(){                         //function call
//     int radius, side, length, breadth;

//     printf("Enter the radius of the circle: ");
//     scanf("%d", &radius);

//     printf("Enter the side of the sqaure: ");
//     scanf("%d", &side);

//     printf("Enter the lenght and breadth of the rectangle: ");
//     scanf("%d%d", &length, &breadth);

//     areaCircle(radius);
//     areaSquare(side);
//     areaRectangle(length, breadth);

//     return 0;
// }

// void areaCircle(int radius){
//     float areaCircle = 3.14*radius*radius;
//     printf("Area of the circle is %.2f \n", areaCircle);
// }

// void areaSquare(int side){
//     float areaSquare = side * side;
//     printf("Area of the sqaure is %.2f \n", areaSquare);
// }
// void areaRectangle(int length, int breadth){
//     float areaRectangle = length * breadth;
//     printf("Area of the rectangle is %.2f \n" , areaRectangle);
// }

// //What is the output of the following code?
// #include<stdio.h>
// #include<math.h>

// void my_recursive_function(int n)
// {
//     if(n == 0)
//     return;
//     printf("%d ",n);
//     my_recursive_function(n-1);
// }
// int main()
// {
//     my_recursive_function(5);
//     return 0;
// }


// #include <stdio.h>
// int fun(int n)
// {
//     if (n == 4)
//        return n;
//     else return 2*fun(n+1);
// }
// int main()
// {
//    printf("%d ", fun(2));
//    return 0;
// }


// #include<stdio.h>
// #include<math.h>

// void factorial(int n);                  //function declaration segment

// int main(){                             //function call segment
//     int n;

//     printf("Enter number: ");
//     scanf("%d", &n);

//     factorial(n);                       //calling function(n = argument/actual parameter...)

//     return 0;
// }

// void factorial(int n){                  //function definition(n = formal parameter/parameter...)
//     int factorial = 1;
//     for(int i=n; i>=1; i--){
//         factorial = factorial * i;
//     }
//     printf("The factorial of %d is %d...", n, factorial);
// }