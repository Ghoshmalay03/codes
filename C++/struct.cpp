#include<iostream>
using namespace std;
struct Person{
    int citizenship;
    int age;
};
int  main(void){
    struct Person p;
    p.citizenship = 1;
    p.age = 20;
    cout<<"Number of citizenships: "<<p.citizenship<<endl;
    cout<<"Age: "<<p.age<<endl;

    return 0;
}