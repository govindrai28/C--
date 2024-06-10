#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int start =0,end = n-1,mid;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key) 
        start = mid+1;
        else
        end = mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter key element that you want to find in an array: ";
    cin>>key;
    int index = BinarySearch(arr,n,key);
    cout<<index;
    return 0;
}