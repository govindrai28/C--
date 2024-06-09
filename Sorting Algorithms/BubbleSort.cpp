#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,3,4,2,9,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool swapped;
    for(int i=0;i<n-1;i++)
    {
        swapped = 0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }  
        }
        if(swapped == 0) break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}