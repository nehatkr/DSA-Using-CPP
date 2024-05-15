#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int start= 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while (start <= end)
    {
       if(arr[mid]==key){
        ans = mid;
        end = mid-1;
       }
       else if(key>arr[mid]){
        start = mid+1;
       }
       else if(key<arr[mid]){
        end=mid-1;
       }
       mid = start+(end-start)/2;
    }
    return ans;
}

int LastOcc(int arr[],int n,int key){
    int start= 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    int ans = -1;
    while (start <= end)
    {
       if(arr[mid]==key){
        ans = mid;
        start = mid+1;
       }
       else if(key>arr[mid]){
        start = mid+1;
       }
       else if(key<arr[mid]){
        end=mid-1;
       }
       mid = start+(end-start)/2;
    }
    return ans;
}
int main(){
    int even[7] = {1,2,3,3,3,3,5};

int indexOfFirstOcc = firstOcc(even,7,3);
int indexOfLastOcc = LastOcc(even,7,3);

int no_Of_Occ=(indexOfLastOcc-indexOfFirstOcc)+1;
cout<<"The total number of occurance of 3 is: "<<no_Of_Occ;
    return 0;
}