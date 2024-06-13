#include <iostream>
 
using namespace std;
 
// The function will sort arry[] of size m using Bubble Sort.
void BubbleSort (int arry[], int m)
{
    int i, j;
    for (i = 0; i < m; ++i)
    {
        bool swapped = false;
        for (j = 0; j < m-i; ++j)
        {
            // Comparing consecutive elements and switching values when value at j > j+1.
            if (arry[j] > arry[j+1])
            {
                arry[j] = arry[j]+arry[j+1];
                arry[j+1] = arry[j]-arry[j + 1];
                arry[j] = arry[j]-arry[j + 1];
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }  
}  
 
// Main method
int main()
{
    int m, i;
    cout<<"\nEnter the total number of elements to be sorted: ";
    cin>>m;
 
    int arry[m];
    for(i = 0; i < m; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arry[i];
    }
 
    // Call BubbleSort() function with arry[] of size m
    BubbleSort(arry, m);
 
    // Display the sorted array.
    cout<<"\nSorted Array is ";
    for (i = 0; i < m; i++)
    cout<<" -> "<<arry[i];
 
    return 0;
}