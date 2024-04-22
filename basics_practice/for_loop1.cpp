#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"printing count from 1 to n"<<endl;
    int i =1;
    for(;;){ //another way to write for loop
        if(i<=n){
            cout<< i <<endl;
        }
        else{
            break;
        }
        i++;
    }

    // printing multiple condition in a single loop
    for(int a = 0,b = 1;a>=0 && b>=1; a--,b--){
        cout<< a <<" "<<b <<endl;
    }
}