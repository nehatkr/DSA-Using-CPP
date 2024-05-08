//  In the given array/list, 'm' number are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
#include<iostream>
using namespace std;

int main(){
    int size=7;
int ans=0;
int arr[] = {2,4,2,3,4,3,6};
 for (int i = 0; i < size; i++)
    {
       ans = ans^arr[i]; //xro:- a^a=0 & 0^a=a
    }
cout<<ans<<endl;
    return 0; 
}