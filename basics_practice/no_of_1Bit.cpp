// 1000001110
// find teh number of 1 present in a given representation
#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter the number in binary form"<<endl;
    cin>>n;
    while(n != 0){
        if (n&1)
        {
            count++;
        }
        n = n>>1;
        
    }
    cout<<count<<endl;
}
