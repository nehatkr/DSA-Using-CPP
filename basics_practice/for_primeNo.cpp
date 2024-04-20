#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n"<<endl;
cin>>n;
bool isPrime = 1;
for (int i = 2; i < n; i++)
{
//    rem = 0, Not a prime
if (n%2==0)
{
    isPrime=0;
    break;
}

}
if (isPrime==0)
{
   
   cout<<"Not a Prime number";
}else{
    cout<<"Is a Prime number";
}
    
}