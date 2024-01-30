#include<iostream>
using namespace std;
int main(){
    int n,value,col;
    cin>>n;
    int row = 1;

    while(row<=n){
        value = row;
        col = 1;
        while(col<=row){
            cout<<value;
            value = value+1;
            col++;
        }
        cout<<endl;
        row++;
    }

     return 0;
}

// n=4
// 1
// 23
// 345
// 5678