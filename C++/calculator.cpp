// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a, b, op;
//     cout<<"Enter 1st number: ";
//     cin>>a;
//     cout<<"Enter 2nd number: ";
//     cin>>b;
//     cout<<"Press 1 for ADDITION, 2 for SUB, 3 for MUL, 4 for DIV: ";
//     cin>>op;
//     switch(op){
//         case 1: cout<<a+b;
//         break;
        
//         case 2: cout<<a-b;
//         break;
        
//         default: cout<<"Error";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class room{
public:
    int cost, sweet;
    int guest;

    void guests(){
        cout<<"Enter number of guests: ";
        cin>>guest;
    }

    void amount(){
        if(guest >= 4){
            sweet=(2*220)+(10/100);
            cout<<"Sweet cost: "<<sweet;
        } else{
        cost=(2*120)+10;
        cout<<"Total amount: "<<cost;
        }
    }
};

int main(){
    room r1;
    r1.guests();
    r1.amount();

    return 0;
}