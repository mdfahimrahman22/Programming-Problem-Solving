#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int temp,i,j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        for(j=i-1;j>=0&&arr[j]>temp;j--)
        {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[]= {4,7,2,45,33,46};
    int n=sizeof(arr)/sizeof(arr[3]);
    insertionSort(arr, n);
    cout << "Sorted array is \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


