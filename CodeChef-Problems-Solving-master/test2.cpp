// C++ implementation to find all
// Pairs possible from the given Array

#include <bits/stdc++.h>
using namespace std;

// Function to print all possible
// pairs from the array
void printPairs(int arr[], int n,int k)
{
int cnt=0;
	// Nested loop for all possible pairs
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
                if(i==j)continue;
			cout << "(" << arr[i] << ", "
				<< arr[j] << ") "<<abs(arr[i]-arr[j])<<" "<<k
				<< "\n";
				if(abs(arr[i]-arr[j])>=k&&i>j)
                    cnt++;
		}
	}
	cout<<cnt<<endl;
}

// Driver code
int main()
{
	freopen("abc.txt","r",stdin);
    int n,c=0;
    int k;
    cin>>n>>k;
    int a[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
	printPairs(a, n,k);

	return 0;
}
