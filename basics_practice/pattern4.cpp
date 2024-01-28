#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<"  ";
            count = count + 1;
            j++;

        }
        cout<<endl;
        i++;
    }
    return 0;
}
// n=3
// 123
// 456
// 789