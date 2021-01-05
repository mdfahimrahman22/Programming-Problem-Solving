#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
int main()
{
    int arr[]= {4,7,2,45,33,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, n,33);
    if(result == -1) cout << "Element is not present in array"<<endl;
    else cout << "Element is present at index " << result;
    return 0;
}




