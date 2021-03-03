// Merge two sorted array.
// N = 4, M = 5
// arr1[] = 1 3 5 7
// arr2[] = 0 2 6 8 9
// Output : 0 1 2 3 5 6 7 8 9

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for (int i=0;i<n;i++)
        cin>>arr1[i];
    for (int i=0;i<m;i++)
        cin>>arr2[i];

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
        if(arr1[j]>arr2[i]){
            swap(arr2[i],arr1[j]);
        }
    }
    sort(arr2,arr2+m);

    for (int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    for (int i=0;i<m;i++)
        cout<<arr2[i]<<" ";

    return 0;
}
