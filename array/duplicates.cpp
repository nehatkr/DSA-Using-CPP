#include<iostream>
using namespace std;

int main(){
    int ans =0;
    int arr[7]={1,4,3,6,7,4,8};
    // XOR ing all array element
    for (int i = 0; i < 7; i++)
    {
       ans = ans^arr[i];
    }
    // XOR [1 , n-1]
    for (int i = 1; i < 7; i++)
    {
       ans = ans^i;
    }
    
    cout<<ans<<endl;
}