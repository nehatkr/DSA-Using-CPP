#include<iostream>
using namespace std;

int ap(int n){
    int ans=0;
    ans =(3*n)+7;
    return ans;
}
int main(){
 int n;
 int ans=0;
 cout<<"Enter number:"<<endl;
 cin>>n;
cout<<"The nth term of a given number is: "<<ap(n)<<endl;
return 0;
}