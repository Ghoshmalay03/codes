// #include<bits/stdc++.h>
// using namespace std;

// class Person{
//     std::string name;
//     int age;
    
//     public:
//         Person(){   //default construction declaration
//             std::cout<<"Default constructor has been called"<<std::endl;    //constructor body
//         }
//         void setname(){
//             std::cout<<"Enter name: ";
//             std::getline(std::cin,name);
//         }
//         void setage(){
//             std::cout<<"Enter age: ";
//             std::cin>>age;
//         }
//         void display(){
//             std::cout<<"Name: "<<name<<endl;
//             std::cout<<"Age: "<<age<<endl;
//         }
// };

// int main(){
//     Person p1;
//     p1.setname();
//     p1.setage();
//     p1.display();
    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle{
// private:
//     int length, breadth;
// public:
//     //non-parameterized constructor
//     Rectangle(){
//         length=5;
//         breadth=2;
//     }

//     int area(){
//         return length*breadth;
//     }

//     void calArea(){
//         cout<<"Area is "<<area()<<endl;
//     }
// };

// int main(){
//     Rectangle r1;
//     r1.calArea();

//     return 0;
// };


#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int length, breadth;
public:
    //parameterized constructor
    Rectangle(int l, int b){
        length=l;
        breadth=b;
    }

    int area(){
        return length*breadth;
    }

    void calArea(){
        cout<<"Area is "<<area()<<endl;
    }
};

int main(){
    Rectangle r1(5,2);
    r1.calArea();

    return 0;
};