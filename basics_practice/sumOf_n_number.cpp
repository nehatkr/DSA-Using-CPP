#include<iostream>
using namespace std;
 int main(){
    int sum = 0 ;
    int i=1 ;
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    while(i<=n){
        sum = sum + i;
        i++;

    }
    cout<<"Sum of " <<n<< " numbers is: "<<sum<<endl;
    return 0;
 }