 #include<iostream>
 using namespace std;
 int main(){
    int n;
    char ch='A';
    cin>>n;
    int row=1;

    while(row<=n){
        int col=1;
        while(col<=row){
      //print in a character form
            cout<<ch;
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
 }
// n=4
// A
// BC
// DEF
// GHIJ