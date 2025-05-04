#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int num1; float num2; char grade;
    cin>> num1;
    cin>> num2;
    cin>> grade;
    cout<< "Employee id : "<< num1;
    cout<< fixed << setprecision(2);
    cout<< "\n Amount : " << num2;
    cout<< "\n Grade : " << grade;

    return 0;
}