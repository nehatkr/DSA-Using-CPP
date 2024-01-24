#include<iostream>
using namespace std;

int main(){
 char ch;
 cout<<"Enter a character:"<<endl;
 cin>>ch;

 if(ch>96 && ch<123){
    cout<<"This is Lower Case"<<endl;
 }else if(ch>64 && ch <91)
 {
    cout<<"This is Upper Case"<<endl;
 }else if(ch>47 && ch<58){
    cout<<"A Numeric value"<<endl;
 }else{
    cout<<"This is a Symbol"<<endl;
 }
 return 0;
}