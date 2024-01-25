#include<iostream>
using namespace std;
int main(){
 int n;
 int sum=0;
 int i=1;
 cout<<"Enter the number"<<endl;
 cin>>n;

    while(i<=n){
        if((i%2)==0){ 
        sum = sum + i;
        }
        i++;
    }
 cout<<"Sum is: "<<sum<<endl;
    return 0;
}
