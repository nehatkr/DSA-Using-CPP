#include<iostream>
using namespace std;
int main(){
    int row=1;
    int col=1;
    int n;
    cin>>n;
    while (row<=n)
    {
       col=1;
       while (col<=row)
       {
        cout<<"*";
        col++;
       }
       cout<<endl;
       row++;

    }
    return 0;
}
// n=4
// *
// **
// ***
// ****
