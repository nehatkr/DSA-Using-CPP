#include<iostream>
using namespace std;

int binarySearch(int arr[],int size , int key ){
int start = 0;
int end = size-1;
int mid = start +(end-start)/2;
while(start <= end){
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
      start = mid + 1;
    }
    else{
        end = mid - 1;
    }
    mid =  start +(end-start)/2;
}
return -1;
}

int main(){
    int even[6] = {3,6,4,9,1,5};
    int odd[5] = {2,8,4,7,9};

int evenindex = binarySearch(even,6,9);
cout<<"Index of 9 is:- "<< evenindex<<endl;

int oddindex = binarySearch(odd,5,4);
cout<<"Index of 4 is:- "<< oddindex<<endl;

return 0;

}