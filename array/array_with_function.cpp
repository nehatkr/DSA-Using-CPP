#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"printing DONE"<<endl;

}
int main(){
    // declare
    int number[15];
    // accessing an array
    printArray(number, 15);

    int number2[15]={2,8};
    int n= 15;
    printArray(number2,15);
    int number2size = sizeof(number2)/sizeof(int);
    return 0;
}