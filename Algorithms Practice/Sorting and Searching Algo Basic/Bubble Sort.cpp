#include<bits/stdc++.h>
using namespace std;
void bubbleSortAssending(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}
void bubbleSortDescending(int a r[], int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] < arr[j+1])
                swap(arr[j], arr[j+1]);
}
int main()
{
    int arr[]= {4,7,2,45,33,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSortAssending(arr,n);
    cout << "Sorted array is \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
