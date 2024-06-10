#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)//0th element is already sorted
    {
        int j = i-1; // for comparision 
        int temp = arr[i]; // copy that value
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];//for shifthing
            j--;
        }
        arr[j+1]= temp;

    }

}
void printArray(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
    printArray(arr,n);
    
    
    return 0;
}