#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "; 
cin>>n; int num=0;
int pow =1;
while(n>0)
{
   int rem = n%10;
    n = (int)n/10;
    num+=rem*pow;
    pow*=2;
}
cout<<"The decimal number is : "<<num<<endl;
}