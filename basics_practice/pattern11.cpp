 #include<iostream>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
            char ch = 'A'+row-1; //print in a character form
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
 }
// n= 4
// A
// BB
// CCC
// DDDD