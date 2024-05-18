#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int start= 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    while (start<end)
    {
       if (arr[mid]<arr[mid+1])
       {
        start=mid+1;
       }
       else{
        end=mid;
       }
         mid = start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[6] = {2,3,4,5,2,1};
    // int result = peakElement(arr,6);

    cout<<"The peak element of an array is on index :"<<peakElement(arr,6);
    return 0;
}