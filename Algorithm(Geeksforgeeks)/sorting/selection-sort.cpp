#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void selection_sort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index=i;
        for(int j=i+1; j<n; j++)
            if(a[min_index]>a[j])min_index=j;
        swap(a[min_index],a[i]);
    }

}

/* Function to print an array */
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
    selection_sort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);


    return 0;
}
