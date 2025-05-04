// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int array[n];

//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     for (int i=0; i<n; i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int array[n];
//     int maxNum=INT_MAX;

//     for(int i=0; i<n; i++){
//         maxNum=max(maxNum, array[i]);
//     }

//     cout<<maxNum<<" ";

//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     { 
//         cin>>array[i];
//     }

//     int maxNum=INT_MIN;
//     int minNum=INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         maxNum=max(maxNum, array[i]);
//     }
//     cout<<maxNum<<" ";

//     return 0;
//  }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int student[n];

//     int maxNum = INT_MAX;
//     for(int i=0; i<n; i++){
//         maxNum=max(maxNum, student[i]);
//     }

//     cout<<maxNum;

//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n[10];

//     for (int  i = 0; i < 10; i++)
//     {
//         n[i]=0;
//     }

//     cout<<"Element"<<"\tValue"<<endl;

//     for (int i = 0; i < 10; i++)
//     {
//         cout<<i<<"\t"<<n[i];
//     }
    
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100], n, end, beg, mid, search;
//     cin>>n;
//     cout<<"Enter"<<n<<" no. of elements in array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     beg=0;
//     end=n-1;
//     mid=(beg+end)/2;
//     while (beg<=end)
//     {
//         if(arr[mid]==search){
//             cout<<"Item found at position"<<(mid+1);
//         }
//         if (search>arr[mid])
//         {
//             beg=mid+1;
//         }
//         else{
//             end=mid-1;
//         }

//         cout<<"Not found";
//     }
//     return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int array[n];

//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     for (int i=0; i<n; i++){
//         cout<<array[i]<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int maxNum=INT_MAX;
    int minNum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxNum=max(maxNum, array[i]);
    }
    cout<<maxNum<<" ";
    
    return 0;
}