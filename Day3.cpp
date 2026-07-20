#include<iostream>
using namespace std;
int main(){
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 
    char ch ='a';
// for(int i =0; i<3;i++){
    
//         for(int j=0;j<3;j++)
//         {
//             cout<<ch<<" ";
//         ch++;
//         }
//         cout<<endl;
//     }
// int n=1;
// for(int i =1; i<=4;i++){
    
//         for(int j=i;j>1;j--)
//         {
//             cout<<" ";
//             // n++;
//         }
//         for(int k =4;k>=i;k--)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// pyramid pattern 
// int n =10;
// for(int i =0;i<n;i++)
// {
//     for(int j =0;j<n-i-1;j++){
//         cout<<" ";

//     }
// for(int j=1;j<=i+1;j++){
//     cout<<j;;
// }



//     for(int j=i;j>0;j--){
//         cout<<j;
//     }
//     cout<<endl;

// }
//     return 0;
//hollow pyramid pattern
int n =10;
for(int i =0;i<n;i++)
{
    for(int j =0;j<n-i-1;j++){
        cout<<" ";

    }cout<<"*";
    if(i!=0){
        for(int j=0;j<2*i+1;j++){
            cout<<" ";
        }cout<<"*";
    } cout<<endl;
}


}