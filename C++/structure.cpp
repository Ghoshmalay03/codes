#include<iostream>
#include<string>
using namespace std;
struct structurename
{
    int integer;
    float decimal;
    string name;
};

void structurename(){
    cout<<"Name: "<<name;
    cout<<"CGPA: "<<decimal;
    cout<<"Age: "<<integer;
};

int main(){
    structurename s1;
    s1.integer=45;
    s1.name="Malay";
    s1.decimal=9.1;
    return 0;
}