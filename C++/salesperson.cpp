#include<iostream>
using namespace std;
int main(){
    string name;
    int n, avg, n1, n2, n3, n4, n5;
    int total1=10+20+30+40;
    int total2=10+20+30;

    cin>>name;
    cin>>n;
    cout<<"Enter n: ";
    if (n==5)
    {
        cout<<"\nTotal sales: "<<total1;
    } else{
        cout<<"\nTotal sales: "<<total2;
    }
    return 0;
}