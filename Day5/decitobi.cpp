#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "; 
cin>>n; int num=0;
while(n>=0)
{
    num =(n%2)*10+num;
    n = (int)n/2;
}
cout<<"The binary number is : "<<num<<endl;
}