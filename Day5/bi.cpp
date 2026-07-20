#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "; 
cin>>n; int num=0;
int pow =1;
while(n>0)
{
   int rem = n%2;
    n = (int)n/2;
    num+=rem*pow;
    pow*=10;
}
cout<<"The binary number is : "<<num<<endl;
}