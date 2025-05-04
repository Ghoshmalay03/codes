#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<=n; i++){
        cin>>array[i];
    }
    int a;
    cin>>a;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if(array[i]==a){
            count++;
        }
    }
    cout<<count++;
    return 0;
    
}