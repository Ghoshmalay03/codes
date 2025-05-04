// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
// public:
//     float a;
//     float b;
//     float c;
//     float d;
    
//     Complex(){  //this is a default constructor
    
//     };
    
//     void setvalue(){
//         cin>>a>>b;
//         cin>>c>>d;
//     }
    
//     void getvalue(){
//         cout<<"Sum of complex number is "<<a+c<<"+"<<b+d<<"i"<<endl;
//     }
// };
// int main(){
//     Complex c1;
//     c1.setvalue();
//     c1.getvalue();
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
// public:
//     float real;
//     float imag;
    
//     Complex(){  //this is a default constructor
//         real = 0.0;
//         imag = 0.0;
//     };
    
//     void setval(float a, float b){
//         real = a;
//         imag = b;
//     }
    
//     void sum(Complex c1, Complex c2){
//         real = c1.real + c2.real;
//         imag = c1.imag + c2.imag;
//     }
    
//     void display(){
//         cout<<"Sum of two complex numbers is "<<fixed<<setprecision(1)<<real<<" + "<<fixed<<setprecision(1)<<imag<<"i";
//     }
// };
// int main(){
//     float real1, real2, imag1, imag2;
//     cin>>real1>>imag1;
//     cin>>real1>>imag1;
//     Complex c1, c2, c3;
//     c1.setval(real1, imag1);
//     c2.setval(real2, imag2);
//     c3.sum(c1,c2);
//     c3.display();
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Vehicle{
// public:
//     string regno;
//     string make;
//     string model;
//     int year;
    
//     Vehicle(string r, string v, string m, int y){
//         regno=r;
//         make=v;
//         model=m;
//         year=y;
//     };
    
//     void getdetails(){
//         cin>>regno;
//         cin>>make;
//         cin>>model;
//         cin>>year;
//     }
    
//     void getoutput(){
//         cout<<"Registration number: "<<regno<<endl;
//         cout<<"Make: "<<make<<endl;
//         cout<<"Model: "<<model<<endl;
//         cout<<"Year of manufacture: "<<year<<end;
//     }
// };

// int main(){
//     Vehicle v1;
//     v1.getdetails();
//     v1.getoutput();
    
//     return 0;
// }

//D is working on a program that involves processing numerical data. He needs to write a program that allows the user to input a set of numbers, stores them in an array, and then write the numbers to a file names "sample.dat", Additionally, that program should find the maximum an minimun values from the input numbers and display them on the console.
//Input format: The first line consists of an integer N, representing the number of values to be stored. The second line of input consists of N space-separated values.
//Output format: The output printts two space-separated integers representing the maximum and the minimum values, respectively.

// #include <iostream>
// #include <fstream>
// #include <vector>
// #include <limits>

// int main() {
//     int N;
//     std::cout << "Enter the number of values: ";
//     std::cin >> N;
    
//     std::vector<int> numbers(N);
    
//     std::cout << "Enter " << N << " space-separated numbers: ";
//     for(int i = 0; i < N; i++) {
//         std::cin >> numbers[i];
//     }
    
//     // Write the numbers to a file
//     std::ofstream file("sample.dat");
//     if (file.is_open()) {
//         for(int i = 0; i < N; i++) {
//             file << numbers[i] << " ";
//         }
//         file.close();
//     } else {
//         std::cerr << "Error opening file." << std::endl;
//         return 1;
//     }
    
//     // Find maximum and minimum values
//     int maxVal = std::numeric_limits<int>::min();
//     int minVal = std::numeric_limits<int>::max();
    
//     for(int i = 0; i < N; i++) {
//         if(numbers[i] > maxVal) {
//             maxVal = numbers[i];
//         }
//         if(numbers[i] < minVal) {
//             minVal = numbers[i];
//         }
//     }
    
//     // Output the maximum and minimum values
//     std::cout << maxVal << " " << minVal << std::endl;
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//         int roll;
//         int fee;
//         string name;
    
//     Student(){      //this is a copy constructor
        
//     };
    
//     void getinput(){
//         cout<<"Enter roll no.: ";
//         cin>>roll;
//         cout<<"Enter fees: ";
//         cin>>fee;
//         cout<<"Enter name: "<<endl;
//         getline(cin, name);
//     }
    
//     void getoutput(){
//         cout<<roll;
//         cout<<fee;
//         cout<<name;
//     }
// };

// int main(){
//     Student s1;
//     s1.getinput();
//     s1.getoutput();
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

// class Vehicle{
// private:
//     string number;
//     string model;
//     int modelno;
// public:
//     Vehicle(string n, string m, int mn){
//         number = n;
//         model = m;
//         modelno = mn;
//     }

//     void getdetails(){
//         cout<<"Car number is "<<number<<endl;
//         cout<<"Car model is "<<model<<endl;
//         cout<<"Car model no. is "<<modelno<<endl;
//     }
// };

// int main(){
//     string number;
//     string model;
//     int modelno;

//     //Input
//     cout<<"Enter car number: ";
//     cin>>number;
//     cout<<"Enter car model: ";
//     cin>>model;
//     cout<<"Enter car model no.: ";
//     cin>>modelno;

//     Vehicle v1(number, model, modelno);
//     v1.getdetails();

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class Height{
private:
    int feet1, inch1;
    int feet2, inch2;
public:
    Height(int f1, int i1, int f2, int i2){
        feet1 = f1;
        feet2 = f2;
        inch1 = i1;
        inch2 = i2;
    };

    void getoutput(){
        cout<<"Height is "<<feet1-feet2<<"'"<<inch1-inch2<<"''"<<endl;
    }
};

int main(){
    int feet1, inch1;
    int feet2, inch2;

    //input
    cout<<"Enter height h1: ";
    cin>>feet1>>inch1;
    cout<<"Enter height h2: ";
    cin>>feet2>>inch2;

    Height h1(feet1, feet2, inch1, inch2);
    h1.getoutput();

    return 0;
}