#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while (row<=n)
    {
        // print space(1st traingle)
       int space = n-row;
       while (space){
          cout<<" ";
          space--;
       }
    //    print 2nd traingle
       int col = 1;
       while(col<=row){
        cout<<col;
        col++;
       }
    //    print 3rd traingle
       int start = row - 1;
       while(start){
        cout<<start;
        start = start-1;
       }
       cout<<endl;
       row++;
    }
    
}
// n=5
//     1
//    121
//   12321
//  1234321
// 123454321