//Find maximum and minimum element in an array.
//O(n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++)
        cin>>arr[i];

    int maxarray=INT_MIN,minarray=INT_MAX;
    for (int i=0;i<size;i++){
        maxarray=max(maxarray,arr[i]);
        minarray=min(minarray,arr[i]);
    }

    cout<<"\nMAXIMUM ELEMENT IS : "<<maxarray;
    cout<<"\nMINIMUM ELEMENT IS : "<<minarray;

    return 0;
}
