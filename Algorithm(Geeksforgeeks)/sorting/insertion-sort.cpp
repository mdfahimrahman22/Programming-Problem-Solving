#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void insertion_sort(int a[],int n)
{

    for(int i=1; i<n; i++)
    {
        int key=a[i],j;
        for(j=i-1; j>=0&&a[j]>key; j--)
        {
            a[j+1]=a[j];
        }

        a[j+1]=key;

    }

}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    fastIo
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}

