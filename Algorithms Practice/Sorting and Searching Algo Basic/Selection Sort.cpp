#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    int i, j, min_index;

    for (i = 0; i < n-1; i++)
    {
        min_index = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_index])
                min_index = j;

        swap(arr[min_index], arr[i]);
    }
}

int main()
{
    int arr[]= {4,7,2,45,33,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array is \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



