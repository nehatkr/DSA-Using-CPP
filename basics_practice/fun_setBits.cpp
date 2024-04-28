#include<iostream>
using namespace std;

int countSetBits(int n){
    int count=0;
    while (n)
    {
        count += n&1;
        n>>=1;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<endl;
    cout<<"count of set bits: "<<countSetBits(n);
    return 0;
}


// int main(){
//     int ans = 0,n;
//    cin>>n;
//    while (n>0)
//    {
//     if (n & 1)
//     {
//         ans++;
//     }
//     n = n>>1;
//    }
//    cout<<ans<<endl;
//    return 0;

// }
