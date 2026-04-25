#include<iostream>
using namespace std;

//Pattern 1
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5

// int main()
// {
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }


//Pattern 2
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = n;
//         while(j <= n){
//             cout<<n-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

//Pattern 3
//1 2 3
//4 5 6
//7 8 9

// int main() {
//     int n;
//     cin>>n;

//     int i = 1;
//     int count = 1;

//     while(i<=n*n){

//         int j = 1;
//         while(j <= n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

//Pattern 4
//*
//* *
//* * *
//* * * *

// int main() {
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i <= n){
        
//         int j = 1;
//         while(j <= i){
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

//Pattern 5
// * * * * *
// * * * *
// * * * 
// * *
// *

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i <= n){
        
//         int j = 1;
//         while(j <= n-i+1){
//             cout<<"*"<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }


//pattern 6
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i<<" ";
//             j++;
//          }
//         cout<<endl;
//         i++;
//     }

//     return 0;
// }

//pattern 7

int main(){
    int n;
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0; 
}