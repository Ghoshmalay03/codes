#include<iostream>
#include<iomanip>
#include<climits>
using namespace std;
void minTemp(){
};

int main(){
    int n;
    cin>>n;
    int temp[n];
    for(int i=0; i<n; i++){
        cin>>temp[i];
    }
    int minTemp=INT_MIN;
    for(int i=0; i<n; i++){
        minTemp=min(minTemp, temp[i]);
    }
    
    cout<<minTemp<<endl;
    
    return 0;
}