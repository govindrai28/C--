#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;   
            }
        }
        if(min!=0)
        {
            swap(arr[min],arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}