#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int midle, int right)
{
    int n1 = midle - left + 1;
    int n2 = right - midle;
    int LeftArr[n1], RightArr[n2];

    for (int i = 0; i < n1; i++)
        LeftArr[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        RightArr[j] = arr[midle + j + 1 ];

    int i = 0,j=0,k=left;

    while (i < n1 && j < n2)
    {
        if (LeftArr[i] <= RightArr[j])
        {
            arr[k] = LeftArr[i];
            i++;
        }
        else
        {
            arr[k] = RightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = LeftArr[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = RightArr[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right)
{
    if(left>=right)return;
    int midle = (left+right-1)/2;
    mergeSort(arr,left,midle);
    mergeSort(arr,midle+1,right);
    merge(arr,left,midle,right);
}
int main()
{
    int arr[]= {4,7,2,45,33,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    cout << "Sorted array is \n";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

